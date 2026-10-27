#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9]={9,8,7,6,5,4,3,2,1};
    int temp,n=9;
    printf("Unsorted Array:\n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    for(int i=0;i<=n-2;i++){
        int min=INT_MAX;
        int minindex;
        for(int j=i;j<=n-1;j++){  //To find Min Element and it's Index
            if(min>arr[j]){
                min=arr[j];
                minindex=j;
            }
        }
        int temp=arr[minindex];   //Swap The Min Index Value to i index
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    printf("\nSorted Array:\n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}