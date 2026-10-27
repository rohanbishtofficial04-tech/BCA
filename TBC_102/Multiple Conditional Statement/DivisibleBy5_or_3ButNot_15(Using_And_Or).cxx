#include <stdio.h>
int main()
{
	int a;
	printf("Enter A Number!\n");
	scanf("%d", &a);

	if ((a % 3 == 0 || a % 5 == 0) && a%15!=0){
		printf("%d is divisible by 5 or 3 but not by 15",a);
	}
else
{
	printf("%d is not matching the required condition", a);
}
return 0;
}