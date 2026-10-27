#include<stdio.h>
void min(int a,int b){
    if(a<b)
    printf("%d",a);
    else
    printf("%d",b);
    return;
}
int main(){
    min(8,5);
    return 0;
}