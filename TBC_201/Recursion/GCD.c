#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    int a=6,b=4;
    printf("gcd:%d",gcd(a,b));
    return 0;
}   