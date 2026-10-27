#include<stdio.h>
void fun(int swap[]){
    int temp=swap[0];
    swap[0]=swap[1];
    swap[1]=temp;
    return;
}
int main(){
    int arr[2]={2,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}