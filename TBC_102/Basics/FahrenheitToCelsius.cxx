#include <stdio.h>
int main()
{
	float f;
	printf("Enter Temperature in Fahrenheit!\n");
	scanf("%f",&f);
	
	float c;
	c=(5*(f-32))/9;
	printf("%f Fahrenheit = %f Celsius",f,c);
	return 0;	
}