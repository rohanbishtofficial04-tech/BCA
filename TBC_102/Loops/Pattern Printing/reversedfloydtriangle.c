#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows\n");
    scanf("%d",&r);

    for(int i=r;i>=1;i--){
        printf("\n");
        
        for(int j=i;j>=1;j--){
            printf(" * ");
        }
    }
    return 0;
}