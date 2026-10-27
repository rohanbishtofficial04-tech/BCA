#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nNegative Elements:\n");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
        printf("%d ",arr[i]);
        count++;
        }
    }
    printf("\nNumber of negative elements: %d",count);
        printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}