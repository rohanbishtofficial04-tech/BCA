#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="equsite";
    printf("%s\n",str);
    for(int i=6;i>=1;i--){
        str[i+1]=str[i];
    }
    str[1]='x';
    printf("%s",str);
    return 0;
}