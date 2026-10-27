#include<stdio.h>
#include<string.h>
int main(){
    char *ptr="Hello World!";
    ptr="Hello World 2!";
    while(*ptr!='\0'){
        printf("%c",*ptr); //*ptr used to fetch a character
        ptr++; //ptr used for the address of a character
    }
    // in pointer initialisation we can't access or modify a particular character but can modify the entire string
    char str[]="Hello World!";
    printf("\n");
    printf("%s",str);
    // in normal initialisation we can access or modify a particular character but can't modify the entire string
    return 0;
}