#include<stdio.h>
void sum(int n,int s){
    if(n==0) return;
    sum(n-1,s+1);
    printf("     %d\n",s);
    printf("%d",n);
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum(n,1);
    return 0;
}