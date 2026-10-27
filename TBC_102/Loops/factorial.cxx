#include <stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter A Number\n");	
	if(num>0){
	for(int i=1;i<=num;i++){
		fact=fact*i;
		}
		printf("factorial: %d",fact);
	}
	else
	printf("Factorial Of Negative Number Is Not Possible");
	return 0;	
}