#include<stdio.h>
int main(){
    int a=5;
    int *x=&a;
    printf("%p\n",&a);
    printf("%p\n",&x);
    printf("%d\n",*x);
    *x=7;
    printf("%d",*x);
    return 0;
    }