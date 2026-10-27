#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello";
    int i=0;
    int size=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s2[size];
    int j=0;
    for(int j=0;j<=size;j++){
        s2[j]=s1[j];
    }
    s1[0]='l';
    printf("%s",s1);
    printf("\n%s",s2);
    return 0;
}