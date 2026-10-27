#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4};
    for(int i=0;i<=1;i++){
        printf("\n");
        for(int j=0;j<=1;j++){
            printf("%d  ",a[i][j]+b[i][j]);
        }
    }
    return 0;
}