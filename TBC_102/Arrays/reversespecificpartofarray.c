#include<stdio.h>
void reverse(int arr[],int a,int b){
    int temp;
    for(int i=a,j=b;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,0,9);
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
}