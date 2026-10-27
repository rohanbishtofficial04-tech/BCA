#include<stdio.h>
int sum(int n){
    if(n==0)
    return 0;
    else
    return n%10+sum(n/10);
}
int main(){
    int s;
    int n=12345;
    s=sum(n);
    printf("%d",s);
    return 0;
}