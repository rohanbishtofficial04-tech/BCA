#include <stdio.h>
int main()
{
	float a;
	printf("Enter Dividend\n");
	scanf("%f",&a);
	
	float b;
	printf("Enter Divisor\n");
	scanf("%f",&b);
	
	float c=a/b;
	printf("The remainder when %f divided by %f is: %f",a,b,c);
	return 0;	
}