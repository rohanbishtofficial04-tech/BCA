#include<stdio.h>
int swap(int a,int b){
    int temp;
    printf("Value of a and b before swapping: %d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Value of a and b after swapping: %d and %d",a,b);
}
int main(){
    int m,n;
    printf("enter two numbers\n");
    scanf("%d%d",&m,&n);
    swap(m,n);
    printf("\n%d %d",m,n);
    return 0;
}