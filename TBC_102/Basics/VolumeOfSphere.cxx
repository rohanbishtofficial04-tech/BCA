#include <stdio.h>
int main()
{
	float Radius;
	printf("Enter Radius of Sphere\n");
	scanf("%f",&Radius);
	float Volume = 4*3.14285014*Radius*Radius*Radius/3;
	printf("The Volume is : %f",Volume);
	return 0;	
}