#include<stdio.h>
int main(){
    int n,p=1;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++){
        p=p*arr[j];
    }
    printf("Product of elements of arrays: %d",p);
    return 0;
}