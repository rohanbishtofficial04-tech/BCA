#include <stdio.h>
int visited[10]={0},cost[10][10],min,mincost=0; void prims(int num);
int main()
{
    int num, i, j;
    printf("\n\t\t\tPrim's Algorithm");
    printf("\n\nEnter the number of nodes= ");
    scanf("%d", &num);
    printf("\nEnter the adjacency matrix\n\n");
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("value of cost[%d][%d] : ", i, j);
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    printf("\nThe cost of adjacency matrix\n\n");
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("%d\t", cost[i][j]);
        }
        printf("\n");
    }
    prims(num);
    return 0;
}
void prims(int num)
{
    int i, j, a, b, u, v, min, num_edges = 1;
    visited[1] = 1;
    while (num_edges < num)
    {
        min = 999;
        for (i = 1; i <= num; i++)
        {
            if (visited[i])
            {
                for (j = 1; j <= num; j++)
                {
                    if (!visited[j] && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = u = i;
                        b = v = j;
                    }
                }
            }
        }
        if (!visited[v])
        {
            printf("%d edge (%d,%d) = %d\n", num_edges++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\nMinimum cost = %d\n", mincost);
}
