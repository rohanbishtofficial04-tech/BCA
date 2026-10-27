#include <stdio.h>
int main()
{
	float f;
	printf("Enter a Float Number!\n");
	scanf("%f",&f);
	
	int i;
	i=f;
	
	float float_part=f-i;
	printf("Float Part= %f",float_part);
	printf("\nInteger Part: %d",i);
	return 0;	
}