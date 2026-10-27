#include <stdio.h>
int main()
{
	int age;
	printf("Enter Your Age\n");
	scanf("%d",&age);
	{
		if (age >= 18)
		printf("You Are Eligible For Voting!");
	   else
		printf("You're Not Eligible For Voting!");
	}
	return 0;	
}