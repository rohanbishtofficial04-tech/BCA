#include<stdio.h>
int main(){
    int a=12,b=11,c=10;
    (a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):(b>c?printf("%d is greatest",b):printf("%d is greatest",c)));
    return 0;
}