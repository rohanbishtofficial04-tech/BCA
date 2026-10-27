#include<stdio.h>
void greet(int n){
    if(n==0) return;
    greet(n-1);
    printf("Hello!\n");
    return;
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    greet(n);
    return 0;
}