#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0,x=4;
    for(int j=0;j<=7;j++){
        if(x<arr[j]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
