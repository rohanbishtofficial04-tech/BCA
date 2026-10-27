#include<stdio.h>
int fact(int n){
	if(n==0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
int permutation(int n,int r){
	if(n<r)
	return 0;
	else
	return fact(n)/fact(n-r);
}
int main()
{
	int n,r;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of r:");
	scanf("%d",&r);
	printf("Permutation: %dp%d=%d",n,r,permutation(n,r));
	printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
	return 0;
}