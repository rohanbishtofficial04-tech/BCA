#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_P 10
#define R 3

int allocation[MAX_P][R], maximum[MAX_P][R], need[MAX_P][R];
int available[R];
int completed[MAX_P];
int priority[MAX_P];
int P = 0;

void calculateNeed() {
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];
}

bool isSafe() {
    int work[R];
    bool finish[MAX_P];
    memcpy(work, available, sizeof(available));
    memset(finish, 0, sizeof(finish));
    int safeSeq[MAX_P], idx = 0;

    for (int count = 0; count < P; count++) {
        bool found = false;
        for (int i = 0; i < P; i++) {
            if (!finish[i] && !completed[i]) {
                bool canProceed = true;
                for (int j = 0; j < R; j++) {
                    if (need[i][j] > work[j]) {
                        canProceed = false;
                        break;
                    }
                }
                if (canProceed) {
                    for (int j = 0; j < R; j++)
                        work[j] += allocation[i][j];
                    safeSeq[idx++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
        if (!found)
            return false;
    }
    printf("System is in a safe state. Safe sequence: ");
    for (int i = 0; i < idx; i++)
        printf("P%d ", safeSeq[i]);
    printf("\n");
    return true;
}

void requestResources() {
    int temp_request[MAX_P][R];
    int min_priority = 6;
    int chosen_pid = -1;

    for (int i = 0; i < P; i++) {
        if (completed[i]) continue;

        printf("Enter request for P%d (priority %d): ", i, priority[i]);
        for (int j = 0; j < R; j++)
            scanf("%d", &temp_request[i][j]);

        bool valid = true;
        for (int j = 0; j < R; j++) {
            if (temp_request[i][j] > need[i][j] || temp_request[i][j] > available[j]) {
                valid = false;
                break;
            }
        }
        if (valid && priority[i] < min_priority) {
            min_priority = priority[i];
            chosen_pid = i;
        }
    }

    if (chosen_pid == -1) {
        printf("No valid requests or insufficient resources.\n");
        return;
    }

    for (int i = 0; i < R; i++) {
        available[i] -= temp_request[chosen_pid][i];
        allocation[chosen_pid][i] += temp_request[chosen_pid][i];
        need[chosen_pid][i] -= temp_request[chosen_pid][i];
    }

    if (!isSafe()) {
        printf("Request would lead to unsafe state. Rolling back.\n");
        for (int i = 0; i < R; i++) {
            available[i] += temp_request[chosen_pid][i];
            allocation[chosen_pid][i] -= temp_request[chosen_pid][i];
            need[chosen_pid][i] += temp_request[chosen_pid][i];
        }
    } else {
        printf("Resources allocated to P%d successfully.\n", chosen_pid);
    }
}

void dischargePatient() {
    int pid;
    printf("Enter Patient ID to discharge (0 to %d): ", P - 1);
    scanf("%d", &pid);

    if (pid < 0 || pid >= P || completed[pid]) {
        printf("Invalid or already discharged patient.\n");
        return;
    }

    for (int i = 0; i < R; i++) {
        available[i] += allocation[pid][i];
        allocation[pid][i] = 0;
        need[pid][i] = 0;
    }
    completed[pid] = 1;
    printf("Patient %d discharged and resources released.\n", pid);
}

void viewStatus() {
    printf("\nAvailable Resources: ");
    for (int i = 0; i < R; i++)
        printf("%d ", available[i]);

    printf("\n\nAllocation Matrix:\n");
    for (int i = 0; i < P; i++) {
        if (!completed[i]) {
            printf("P%d: ", i);
            for (int j = 0; j < R; j++)
                printf("%d ", allocation[i][j]);
            printf("\n");
        }
    }

    printf("\nMaximum Matrix:\n");
    for (int i = 0; i < P; i++) {
        if (!completed[i]) {
            printf("P%d: ", i);
            for (int j = 0; j < R; j++)
                printf("%d ", maximum[i][j]);
            printf("\n");
        }
    }

    printf("\nNeed Matrix:\n");
    for (int i = 0; i < P; i++) {
        if (!completed[i]) {
            printf("P%d: ", i);
            for (int j = 0; j < R; j++)
                printf("%d ", need[i][j]);
            printf("\n");
        }
    }

    printf("\nPriority per patient:\n");
    for (int i = 0; i < P; i++) {
        if (!completed[i])
            printf("P%d: %d\n", i, priority[i]);
    }
}

void addNewPatient() {
    if (P >= MAX_P) {
        printf("Cannot admit more patients. Limit reached.\n");
        return;
    }

    printf("Enter max ICU bed, ventilator, nurse needed: ");
    for (int i = 0; i < R; i++) {
        scanf("%d", &maximum[P][i]);
        allocation[P][i] = 0;
        need[P][i] = maximum[P][i];
    }

    printf("Enter patient's priority (1 = highest, 5 = lowest): ");
    scanf("%d", &priority[P]);

    completed[P] = 0;
    printf("Patient P%d admitted.\n", P);
    P++;
}

void resetSystem() {
    memset(allocation, 0, sizeof(allocation));
    memset(maximum, 0, sizeof(maximum));
    memset(need, 0, sizeof(need));
    memset(completed, 0, sizeof(completed));
    memset(available, 0, sizeof(available));
    memset(priority, 0, sizeof(priority));
    P = 0;
    printf("System has been reset.\n");
}

int main() {
    int choice;
    printf("Enter initial available ICU bed, ventilator, nurse: ");
    for (int i = 0; i < R; i++)
        scanf("%d", &available[i]);

    while (1) {
        printf("\n==== ICU Resource Management ====");
        printf("\n1. Request Resources");
        printf("\n2. Discharge Patient");
        printf("\n3. View System Status");
        printf("\n4. Admit New Patient");
        printf("\n5. Check Safe State");
        printf("\n6. Reset System");
        printf("\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: requestResources(); break;
            case 2: dischargePatient(); break;
            case 3: viewStatus(); break;
            case 4: addNewPatient(); break;
            case 5:
                if (!isSafe())
                    printf("System is NOT in a safe state.\n");
                break;
            case 6: resetSystem(); break;
            case 0: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}
