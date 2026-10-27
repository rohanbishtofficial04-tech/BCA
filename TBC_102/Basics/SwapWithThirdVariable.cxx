#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	
	printf("Before Swap:\na=%d b=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
		
	printf("After Swap:\na=%d b=%d",a,b);
	return 0;	
}