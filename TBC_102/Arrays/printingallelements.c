#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    for(int i=0;i<=4;i++){
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nElements are:\n");
    for(int j=0;j<=4;j++){
    printf("%d ",arr[j]);
    }

    int n;
    while(1){
    printf("\n\n\nEnter an element number you want to print\n");
    scanf("%d",&n);
    if(n==1 || n<=5)
    printf("Element number %d is %d",n,arr[n-1]);
    else printf("Not a valid element number(out of bounds)");
    }
    return 0;
}