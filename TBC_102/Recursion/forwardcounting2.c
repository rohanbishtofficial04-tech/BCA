#include<stdio.h>
void increase(int x,int n){
    if(x==n+1) return;
    printf("%d\n",x);
    increase(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    increase(1,n);
    return 0;
}