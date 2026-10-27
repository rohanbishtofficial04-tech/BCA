#include <stdio.h>
int main()
{
	int a;
	printf("Enter Dividend\n");
	scanf("%d",&a);
	
	int b;
	printf("Enter Divisor\n");
	scanf("%d",&b);
	
	int c=a%b;
	printf("The remainder when %d divided by %d is: %d",a,b,c);
	return 0;	
}