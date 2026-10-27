#include<stdio.h>
int main(){
    int n;
    int arr[5];
    printf("Enter first element\n");
    scanf("%d",&arr[0]);
    printf("Enter second element\n");
    scanf("%d",&arr[1]);
    printf("Enter third element\n");
    scanf("%d",&arr[2]);
    printf("Enter fourth element\n");
    scanf("%d",&arr[3]);
    printf("Enter fifth element\n");
    scanf("%d",&arr[4]);

    printf("\nEnter the index of element you want to print?\n");
    scanf("%d",&n);

    printf("%d",arr[n]);
    return 0;
}