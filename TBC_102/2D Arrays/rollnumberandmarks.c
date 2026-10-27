#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    int marks[n][2];
    printf("enter student roll no. and marks\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=1;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n\nStd. roll no.  Marks\n");
    for(int i=0;i<=n-1;i++){
        printf("\n");
        for(int j=0;j<=1;j++){
            printf("%d               ",marks[i][j]);
        }  
    }
    return 0;
}