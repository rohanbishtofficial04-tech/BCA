#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello world";
    char* ptr=str;
    ptr="hello";  // pointer location changed only
    printf("%s",str); // printing str not ptr ,so obivously we get str
    printf("\n");

    char* p=str;
    *p='L';
    printf("%s",str);
    return 0;
}