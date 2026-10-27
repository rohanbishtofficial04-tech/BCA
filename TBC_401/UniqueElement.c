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

    printf("Unique elements in array: \n");

    for (int i = 0; i < n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
