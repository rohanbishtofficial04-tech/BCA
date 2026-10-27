#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
    int n,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    m=sum(n);
    printf("Sum: %d",m);
    return 0;
}