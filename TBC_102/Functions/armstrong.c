#include<stdio.h>
void armstrong(int n){
    int num,r,sum=0;
    num=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(num==sum)
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}