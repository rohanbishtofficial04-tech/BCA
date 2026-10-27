#include<stdio.h>
int power(int m,int n){
    if(n==0) return 1; 
    return m*power(m,n-1);
}
int main(){
    int  p,m,n;
    printf("Enter a number\n");
    scanf("%d",&m);
    printf("Enter power\n");
    scanf("%d",&n);
    p=power(m,n);
    printf("%d",p);
    return 0;
}
