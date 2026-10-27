#include<stdio.h>
int main(){
    int n,element,flag=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Element to search: ");
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            printf("%d is Found at index %d",element,i);
            flag=1;
        }
    }
    if(flag==0){
        printf("Element Not Found");
    }
    return 0;
}