#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=4;
    int temp;
    while(i<j){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}