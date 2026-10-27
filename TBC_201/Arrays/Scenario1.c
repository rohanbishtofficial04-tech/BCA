#include<stdio.h>
int main(){
    int n;
    printf("Enter The Size Of The Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements\n");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                prod=prod*arr[j];
            }
        }
        printf("%d ",prod);
    }
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}