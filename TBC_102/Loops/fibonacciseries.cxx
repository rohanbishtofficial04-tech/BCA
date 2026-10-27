#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("Enter A Number\n");
    scanf("%d",&n);

    printf("\n%d\n%d\n",a,b);

    for(int i=1;i<=n;i++){
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    }
    return 0;
}