#include<stdio.h>
#include<limits.h>
void sort(int m,int arr[m]){
    int temp;
    for(int i=0;i<m;i++){
        for(int j=m;j>=0;j--){
            if(arr[i]>arr[j] && i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int m,x,min=INT_MAX;
    printf("Enter No. Of Toffee Packets\n");
    scanf("%d",&m);
    int arr[m];
    printf("Enter No. of Toffee In Each Packet\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Number Of Children\n");
    scanf("%d",&x);
    sort(m,arr);
    for(int i=0;i<=m;i++){
        if(arr[i+x-1]-arr[i]<min)
        min=arr[i+x-1]-arr[i];
        }
    printf("Minimum Difference: %d",min);
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}