#include<stdio.h>
int main(){
    int r,c;
    printf("enter number of rows: ");
    scanf("%d",&r);
    printf("enter number of column: ");
    scanf("%d",&c);
    
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
          for(int i=0;i<=r-1;i++){
        printf("\n");
        for(int j=0;j<=c-1;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n\nTotal elements: %d",r*c);
    return 0;
}