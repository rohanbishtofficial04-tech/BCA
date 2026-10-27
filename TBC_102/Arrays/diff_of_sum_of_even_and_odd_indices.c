#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int evensum=0,oddsum=0;
     for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<=6;j++){
        if(j%2==0){
            evensum=evensum+arr[j];
        }
        else
        oddsum=oddsum+arr[j];
    }
    printf("\n");
    printf("%d ",evensum-oddsum);
    return 0;
}