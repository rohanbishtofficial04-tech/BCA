#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    arr[4]=100;
    printf("%d",arr[4]);

    float arr2[3]={1.5,2.5,3.5};
    printf("\n%f",arr2[1]);

    char arr3[7]={'a','b','c','@','#','%','&'};
    printf("\n%c",arr3[3]);
    return 0;
}