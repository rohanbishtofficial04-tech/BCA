#include<stdio.h>
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a and b after swapping in swap function: %d and %d\n",a,b);
    return 0;
}
int main(){
    int m,n;
    printf("Enter two numbers\n");
    scanf("%d%d",&m,&n);
    printf("Value of a and b before swapping in main function: %d and %d\n",m,n);
    swap(m,n);
    printf("Value of a and b after swapping in main function: %d and %d",m,n);
        printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}