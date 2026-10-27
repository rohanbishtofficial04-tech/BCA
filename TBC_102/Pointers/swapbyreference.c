#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Value of a and b after swapping in swap function: %d and %d\n",*x,*y);
}
int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Value of a and b before swapping in main function: %d and %d\n",a,b);
    swap(&a,&b);
    printf("Value of a and b after swapping in main function: %d and %d",a,b);
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}