#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9]={1,2,3,4,5,7,7,10,5};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Largest Element: %d\n",max);
    for(int j=0;j<=8;j++){
        if(arr[j]!=max && arr[j]>smax){
            smax=arr[j];
        }
    }
    printf("Second Largest Element: %d",smax);
    return 0;
}