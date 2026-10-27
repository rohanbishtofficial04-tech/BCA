#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    for(int i=0;i<=4;i++){
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nElements are:\n");
    for(int j=4;j>=0;j--){
    printf("%d ",arr[j]);
    }
    return 0;
}