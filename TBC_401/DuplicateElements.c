#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in array: \n");

    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}