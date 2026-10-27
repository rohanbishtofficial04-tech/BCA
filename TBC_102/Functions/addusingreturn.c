#include<stdio.h>
int add(int p,int q){
    return p+q;
}
void main(){
    int m,n,t;
    printf("enter two numbers\n");
    scanf("%d%d",&m,&n);
    t=add(m,n);
    printf("%d",t);
}