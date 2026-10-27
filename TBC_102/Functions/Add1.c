#include<stdio.h>
void add(int p,int q){
    int sum;
    sum=p+q;
    printf("The sum is %d",sum);
}
void main(){
    int m,n;
    printf("enter two numbers\n");
    scanf("%d%d",&m,&n);
    add(m,n);
}