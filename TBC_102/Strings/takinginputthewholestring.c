#include<stdio.h>
int main(){
    char str[]={};
    gets(str);
    printf("Your input was: %s",str);
    printf("\n");
    scanf("%[^\n]s",str);
    printf("%s",str);
}