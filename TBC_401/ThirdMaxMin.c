#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,7,6,5,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    int min=INT_MAX;
    int smin=INT_MAX;
    int tmin=INT_MAX;
    for(int i=0;i<=7;i++){
        if(arr[i]>max){
            tmax=smax;
            smax=max; //previous max value
            max=arr[i]; //max value
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
        else if(arr[i]>tmax && arr[i]!=max && arr[i]!=smax){
            tmax=arr[i];
        }
    }
    for(int i=0;i<=7;i++){
        if(arr[i]<min){
            tmin=smin;
            smin=min; //previous min value
            min=arr[i]; //min value
        }
        else if(arr[i]<smin && arr[i]!=min){
            smin=arr[i];
        }
        else if(arr[i]>tmin && arr[i]!=min && arr[i]!=smin){
            tmin=arr[i];
        }
    }
    printf("Third Largest Element: %d\n",tmax);
    printf("Third Smallest Element: %d",tmin);
    return 0;
}