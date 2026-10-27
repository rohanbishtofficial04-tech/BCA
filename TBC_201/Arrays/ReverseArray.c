#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAfter Reversing elements:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}