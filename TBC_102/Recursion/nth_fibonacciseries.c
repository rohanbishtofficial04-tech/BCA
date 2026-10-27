#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n,f;
    printf("Enter a number\n");
    scanf("%d",&n);
    f=fibo(n);
    printf("%d",f);
    return 0;
}