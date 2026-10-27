#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<=7;j++){
        if(j%2==0){
            arr[j]=arr[j]+10;
        }
        else
        arr[j]=arr[j]*2;
    }
    printf("\n");
    for(int k=0;k<=7;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
