#include<stdio.h>
void palindrome(int n){
    int num,r,sum=0;
    num=n;
    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(num==sum)
    printf("%d is a palindrome",num);
    else
    printf("%d is not a palindrome",num);
}
int main(){
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}