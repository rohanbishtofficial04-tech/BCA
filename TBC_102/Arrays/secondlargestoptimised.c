#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,7,6,5,4,4,2,1};
    int max=INT_MIN;
    int smax;
    for(int i=0;i<=7;i++){
        if(arr[i]>max){
            smax=max; //previous max value
            max=arr[i]; //max value
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("Second Largest Element: %d",smax);
    return 0;
}