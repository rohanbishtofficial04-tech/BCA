#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello world";
    char* s2=s1;
    s1[0]='L';
    printf("%s",s2);
    return 0;
}