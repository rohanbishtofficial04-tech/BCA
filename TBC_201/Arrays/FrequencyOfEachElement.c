#include<stdio.h>
int main(){
    int n,count;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               count++;
               arr[j]=-1;               
            }
        }
        printf("Frequency of %d is: %d\n",arr[i],count);
    }
    }
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}