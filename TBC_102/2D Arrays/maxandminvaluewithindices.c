#include<stdio.h>
#include<limits.h>
int main(){
    int r1,c1,r2,c2;
    int a[3][3]={1,2,3,9,0,6,7,8,4};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        if(a[i][j]>max){
        max=a[i][j];
        r1=i;
        c1=j;
        }
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        if(a[i][j]<min){
        min=a[i][j];
        r2=i;
        c2=j;
        }
    }
    }
    for(int i=0;i<=2;i++){
        printf("\n");
        for(int j=0;j<=2;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\nMax Value: %d\n",max);
    printf("Index: (%d,%d)",r1,c1);
    printf("\nMin Value: %d\n",min);
    printf("Index: (%d,%d)",r2,c2);
    return 0;
}