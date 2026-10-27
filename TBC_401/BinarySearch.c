#include <stdio.h>
int main()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    int low = 1;
    int high = n;
    int mid;
    int flag=0;
    printf("Enter Elements:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);   
    }
    int element;
    printf("Enter Element to search: ");
    scanf("%d", &element);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            printf("%d found at index %d",element,mid);
            flag=1;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(flag==0){
        printf("Element Not Found");
    }
    return 0;
}