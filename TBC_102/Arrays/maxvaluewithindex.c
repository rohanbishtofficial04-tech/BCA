#include<stdio.h>
#include<limits.h>
int main(){
    int index;
    int arr[5]={100,233,34,45,50};
    int max=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    printf("Max value: %d\n",max);
    printf("Index: %d",index);
    return 0;
}