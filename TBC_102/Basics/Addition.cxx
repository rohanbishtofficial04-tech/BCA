#include <stdio.h>
int main()
{
	float x;
	printf("Enter The First Number!\n");
	scanf("%f",&x);
	
	float y;
	printf("Enter The Second Number!\n");
	scanf("%f",&y);
	
	printf("%f + %f = %f",x,y,x + y);
	return 0;
}