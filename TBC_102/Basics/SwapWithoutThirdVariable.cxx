#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	
	printf("Before Swap:\na=%d b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
		
	printf("\nAfter Swap:\na=%d b=%d",a,b);
	return 0;	
}