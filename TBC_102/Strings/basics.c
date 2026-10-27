#include<stdio.h>
int main(){
    char str[]="Hello World!"; // '\0' added automatically.
    char str2[]={'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    int j=0;
    while(str2[j]!='\0'){
        printf("%c",str[j]);
        j++;
    }
    printf("\n");
    printf("%c",str2[4]);  // accessing individual characters
    return 0;
}