#include<stdio.h>
int main(){
    int n,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],temp[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
        temp[j++]=arr[i];
    }
    temp[j++]=arr[n-1];
    printf("Size Of Array After Duplicate Removal: %d\n",j);
    for(int i=0;i<j;i++){
        printf("%d ",temp[i]);
    }  
    return 0;
}