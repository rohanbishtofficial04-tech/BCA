#include <stdio.h>
void jobScheduling(int profit[], int deadline[], int n, int maxDeadline)
{
    int result[20], totalProfit = 0;
    for (int i = 0; i < maxDeadline; i++)
    {
        result[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = deadline[i] - 1; j >= 0; j--)
        {
            if (result[j] == 0)
            {
                result[j] = profit[i];
                totalProfit += profit[i];
                break;
            }
        }
    }
    printf("\nScheduled Job Profits (slot-wise): ");
    for (int i = 0; i < maxDeadline; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\nTotal Profit: %d\n", totalProfit);
}
int main()
{
    printf("\nJob Scheduling using Greedy\n");
    int profit[20], deadline[20], n, maxDeadline;
    printf("\nEnter number of jobs: ");
    scanf("%d", &n);
    printf("\nEnter profit of each job in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &profit[i]);
    }
    printf("\nEnter deadline of each job according to the profit order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &deadline[i]);
    }
    printf("\nEnter maximum deadline: ");
    scanf("%d", &maxDeadline);
    jobScheduling(profit, deadline, n, maxDeadline);
    return 0;
}
