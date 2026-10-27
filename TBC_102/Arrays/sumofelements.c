#include<stdio.h>
int main(){
    int sum=0;
    int arr[5];
    printf("Enter five numbers\n");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=4;j++){
        sum=sum+arr[j];
    }
    printf("Sum of elements of arrays: %d",sum);
    return 0;
}