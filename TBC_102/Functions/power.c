#include<stdio.h>
int power(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    return p;
}
void main(){
    int x,y,z=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("Enter power of the number\n");
    scanf("%d",&y);

    z=power(x,y);
    printf("The number %d with power %d is equals to :%d",x,y,z);
}