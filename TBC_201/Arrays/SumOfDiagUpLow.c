#include<stdio.h>
void diag(int r,int c,int arr[r][c]){
    int diag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j)
            diag=diag+arr[i][j];
        }
    }
    printf("%d",diag);
}
void upperdiag(int r,int c,int arr[r][c]){
    int upperdiag=0;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            upperdiag=upperdiag+arr[i][j];
        }
    }
    printf("%d",upperdiag);
}
void lowerdiag(int r,int c,int arr[r][c]){
    int lowerdiag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            lowerdiag=lowerdiag+arr[i][j];
        }
    }
    printf("%d",lowerdiag);
}
int main(){
    int r,c;
    printf("Enter no. of rows:\n");
    scanf("%d",&r);
    printf("Enter no. of column:\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum Of Diagonal Elements:\n");
    diag(r,c,arr);
    printf("\nSum Of Upper Diagonal Elements:\n");
    upperdiag(r,c,arr);
    printf("\nSum Of Lower Diagonal Elements:\n");
    lowerdiag(r,c,arr);
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}