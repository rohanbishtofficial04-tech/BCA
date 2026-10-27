#include<stdio.h>
int main(){
    int n,num,index;
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
    n++;
    printf("\n\nEnter a number to insert\n");
    scanf("%d",&num);
    printf("\nEnter index at which you want to insert\n");
    scanf("%d",&index);
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    printf("\nArray after insertion\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}