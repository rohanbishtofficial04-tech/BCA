#include<stdio.h>
int main(){
    int n,r,num,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);

    num=n;    
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(num==rev)
        printf("%d is a palindrome",num);
    else
    printf("%d is not a palindrome",num);
    return 0;
}