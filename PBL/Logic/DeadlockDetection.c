#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 10
#define MAX_RESOURCES 10

int main() {
    int n, m;
    int allocation[MAX_PROCESSES][MAX_RESOURCES];
    int request[MAX_PROCESSES][MAX_RESOURCES];
    int available[MAX_RESOURCES];
    int safeSequence[MAX_PROCESSES];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the number of resources: ");
    scanf("%d", &m);

    printf("Enter the allocation matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &allocation[i][j]);

    printf("Enter the request matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &request[i][j]);

    printf("Enter the available resources:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &available[i]);

    bool finished[MAX_PROCESSES] = {false};
    int count = 0;

    // Deadlock detection algorithm with safe sequence tracking
    while (true) {
        bool progress = false;

        for (int i = 0; i < n; i++) {
            if (!finished[i]) {
                bool canProceed = true;

                for (int j = 0; j < m; j++) {
                    if (request[i][j] > available[j]) {
                        canProceed = false;
                        break;
                    }
                }

                if (canProceed) {
                    for (int j = 0; j < m; j++)
                        available[j] += allocation[i][j];

                    finished[i] = true;
                    safeSequence[count++] = i;
                    progress = true;
                }
            }
        }

        if (!progress)
            break;
    }

    if (count == n) {
        printf("\nNo deadlock is detected. All processes can complete.\n");
        printf("Safe sequence is: ");
        for (int i = 0; i < n; i++)
            printf("P%d ", safeSequence[i]);
        printf("\n");
    }
    else {
        printf("\nDeadlock detected! The following processes are deadlocked: ");
        for (int i = 0; i < n; i++)
            if (!finished[i])
                printf("P%d ", i);
        printf("\n");
    }
    return 0;
}