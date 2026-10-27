#include<stdio.h>
int main(){
    int a=25;
    int *x=&a;
    int **y=&x;
    int ***z=&y;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    printf("%p\n",*y);
    printf("%p\n",&a);
    printf("%p\n",**z);
    printf("%p\n",&a);
    printf("%p\n",*z);
    printf("%p\n",&x);
    return 0;
}