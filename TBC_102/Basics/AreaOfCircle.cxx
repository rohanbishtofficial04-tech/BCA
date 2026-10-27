#include <stdio.h>
int main()
{
	float Radius;
	printf("Enter Radius of Circle\n");
	scanf("%f",&Radius);
	float Area = 3.14285014*Radius*Radius;
	printf("The Area is : %f",Area);
	return 0;	
}