#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {4, 8, 8, 5};
    int max = INT_MIN, smax = INT_MIN, tmax = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            tmax = smax;
            smax = arr[i];
        }
        else if (arr[i] > tmax && arr[i] != max && arr[i] != smax)
        {
            tmax = arr[i];
        }
    }
    printf("%d %d %d", max, smax, tmax);
    return 0;
}