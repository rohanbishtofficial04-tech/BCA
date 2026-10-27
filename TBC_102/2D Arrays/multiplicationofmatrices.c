#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter no. of rows for first matrix\n");
    scanf("%d",&m);
    printf("Enter no. of column for first matrix\n");
    scanf("%d",&n);
    int arr1[m][n];
    printf("Enter elements for first matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter no. of rows for second matrix\n");
    scanf("%d",&p);
    printf("Enter no. of column for second matrix\n");
    scanf("%d",&q);
    int arr2[p][q];
    printf("Enter elements for second matrix\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    if(n!=p){
        printf("Matrix cannot be mutiplied");
    }
    else{
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]=res[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
       for(int i=0;i<m;i++){
           printf("\n");
           for(int j=0;j<q;j++){
               printf("%d ",res[i][j]);
            }
        }
}
    return 0;
}
