#include <stdio.h>
#define V 6
#define INF 999
int minDistance(int dist[], int visited[])
{
    int min = INF, min_index = -1;
    for (int v = 0; v < V; v++)
    {
        if (!visited[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}
void printSolution(int dist[])
{
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t\t %d\n", i, dist[i]);
    }
}
void dijkstra(int graph[V][V], int src)
{
    int dist[V], visited[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}
int main()
{
    int graph[V][V] = {{0, 7, 9, 0, 0, 14},
                       {7, 0, 10, 15, 0, 0},
                       {9, 10, 0, 11, 0, 2},
                       {0, 15, 11, 0, 6, 0},
                       {0, 0, 0, 6, 0, 9},
                       {14, 0, 2, 0, 9, 0}};
    dijkstra(graph, 0);
    return 0;
}
