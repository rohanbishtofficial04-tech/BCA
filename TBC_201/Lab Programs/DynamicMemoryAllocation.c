#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n,sum=0;
    printf("Enter Total Numbers Of Elements\n");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed\n");
    }
    else{
    for(int i=0;i<n;i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",(arr+i));
        sum=sum+arr[i];
    }
    printf("\nEntered Elements Are: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\nSum: %d",sum);
    free(arr);
    }
    return 0;
}