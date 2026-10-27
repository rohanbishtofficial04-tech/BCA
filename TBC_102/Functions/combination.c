#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r,ncr,fact1=1,fact2=1,fact3=1;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter r\n");
    scanf("%d",&r);

    fact1=fact(n);
    fact2=fact(r);
    fact3=fact(n-r);
    ncr=fact1/(fact2*fact3);
    printf("%d",ncr);
    return 0;
}