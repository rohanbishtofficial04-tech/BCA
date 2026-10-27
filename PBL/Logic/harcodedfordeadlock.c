#include <stdio.h>
#include <stdbool.h>

#define PATIENTS 3
#define RESOURCES 3 // ICU bed, ventilator, nurse

// Resources: ICU beds, ventilators, nurses
int available[RESOURCES] = {1, 1, 1};

int maximum[PATIENTS][RESOURCES] = {
    {2, 1, 1},
    {1, 2, 1},
    {1, 1, 2}};

int allocation[PATIENTS][RESOURCES] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}};

int need[PATIENTS][RESOURCES];

// Calculate need = max - alloc
void calculateNeed()
{
    for (int i = 0; i < PATIENTS; i++)
        for (int j = 0; j < RESOURCES; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];
}

bool isSafe()
{
    int work[RESOURCES];
    for (int i = 0; i < RESOURCES; i++)
        work[i] = available[i];

    bool finish[PATIENTS] = {false};
    int safeSeq[PATIENTS], count = 0;

    while (count < PATIENTS)
    {
        bool found = false;
        for (int i = 0; i < PATIENTS; i++)
        {
            if (!finish[i])
            {
                bool canProceed = true;
                for (int j = 0; j < RESOURCES; j++)
                {
                    if (need[i][j] > work[j])
                    {
                        canProceed = false;
                        break;
                    }
                }
                if (canProceed)
                {
                    for (int j = 0; j < RESOURCES; j++)
                        work[j] += allocation[i][j];
                    safeSeq[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
        if (!found)
        {
            printf("\nSystem is in UNSAFE state. Risk of deadlock.\n");
            return false;
        }
    }

    printf("\nSystem is SAFE. Treatment sequence: ");
    for (int i = 0; i < PATIENTS; i++)
    {
        printf("Patient%d ", safeSeq[i]);
    }
    printf("\n");
    return true;
}

bool requestResources(int pid, int req[])
{
    for (int i = 0; i < RESOURCES; i++)
    {
        if (req[i] > need[pid][i])
        {
            printf("Patient %d is requesting more than max needed.\n", pid);
            return false;
        }
        if (req[i] > available[i])
        {
            printf("Not enough resources for Patient %d. Must wait.\n", pid);
            return false;
        }
    }

    // Temporarily allocate
    for (int i = 0; i < RESOURCES; i++)
    {
        available[i] -= req[i];
        allocation[pid][i] += req[i];
        need[pid][i] -= req[i];
    }

    if (isSafe())
    {
        printf("Request approved for Patient %d.\n", pid);
        return true;
    }
    else
    {
        // Rollback
        for (int i = 0; i < RESOURCES; i++)
        {
            available[i] += req[i];
            allocation[pid][i] -= req[i];
            need[pid][i] += req[i];
        }
        printf("Request denied for Patient %d to avoid deadlock.\n", pid);
        return false;
    }
}

int main()
{
    calculateNeed();

    int choice;
    while (1)
    {
        printf("\n1. Request Resources for Patient\n2. Exit\nChoose: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int pid, req[RESOURCES];
            printf("Enter Patient ID (0-%d): ", PATIENTS - 1);
            scanf("%d", &pid);
            printf("Enter request for [ICU Bed, Ventilator, Nurse]: ");
            for (int i = 0; i < RESOURCES; i++)
            {
                scanf("%d", &req[i]);
            }
            requestResources(pid, req);
        }
        else
        {
            break;
        }
    }

    return 0;
}
