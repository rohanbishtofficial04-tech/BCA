#include<stdio.h>
int main(){
    int r,c;
    printf("enter no. of rows\n");
    scanf("%d",&r);
    printf("enter no. of columns\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter all elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        printf("\n");
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
    }
    return 0;
}