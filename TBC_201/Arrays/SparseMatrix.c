#include<stdio.h>
int main(){
    int r,c,zcount=0;
    printf("Enter no. of rows\n");
    scanf("%d",&r);
    printf("Enter no. of column\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                zcount++;
            }
        }
    }
    if(zcount>=(r*c)/2){
        printf("\nEntered matrix is a sparse matrix\n");
    }
    else{
        printf("\nterd matrix is not a sparse matrix");
    }
    return 0;
}