#include<stdio.h>
int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};
    int temp,n=9;
    printf("Unsorted Array:\n");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted Array:\n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}