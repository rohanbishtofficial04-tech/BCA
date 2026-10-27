#include<stdio.h>
int main(){
    int n,index;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThese are the elements you entered\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter index of that element which you want to delete\n");
    scanf("%d",&index);
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("\nArray after deletion\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}