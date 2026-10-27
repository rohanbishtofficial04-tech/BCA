#include<stdio.h>
int main(){
    int r,c;
    printf("Enter a number of rows\n");
    scanf("%d",&r);
    printf("enter number of column\n");
    scanf("%d",&c);

    for(int i=1;i<=r;i++){
        printf("\n");
        for(int j=1;j<=c;j++){
            printf("* ");
        }
    }
    return 0;
}