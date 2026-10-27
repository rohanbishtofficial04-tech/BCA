#include<stdio.h>
void prime(int a){
    int prime;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            prime=1;
            break;
        }
    }
    if(a==1){
        printf("1 is neither a prime nor composite");
    }
    else if(prime==1){
        printf("%d is a composite number",a);
    }
    else{
        printf("%d is a prime number",a);
    }
    return;
}
void main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    prime(n);
}
