#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter Ages!\n");
	scanf("%d%d%d",&a,&b,&c);

	if (a < b && a < c)
	{
		printf("%d is youngest of all",a);
	}
	if (b < a && b < c)
	{
		printf("%d is youngest of all",b);
	}
	if (c < a && c < b)
	{
		printf("%d is youngest of all",c);
	}
	return 0;
}