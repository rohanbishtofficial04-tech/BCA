#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows\n");
    scanf("%d",&r);

    for(int i=0;i<r;i++){
        for(int j=0;j<r-i;j++){
            printf("  ");
        }
        for(int k=0;k<i;k++){
                printf(" *  ");
        }
        printf("\n");
    }
        return 0;
    }