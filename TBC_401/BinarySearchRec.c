#include<stdio.h>
int bsearch(int arr[],int low,int high,int key){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key) return mid;
    if(key>arr[mid]) return bsearch(arr,mid+1,high,key);
    if(key<arr[mid]) return bsearch(arr,low,mid-1,key);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int low=0;
    int high=9;
    int key=8;
    int s=bsearch(arr,low,high,key);
    if(s==-1){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }
    return 0;
}