#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered Elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);  
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("\nSize Of Array After Duplicate Element Removal: %d\n",n);
    printf("Array after deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);      
    }
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}