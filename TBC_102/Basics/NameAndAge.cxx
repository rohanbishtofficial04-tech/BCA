#include <stdio.h>
int main()
{
	char name[10];
	printf("What's Your Name?\n");
	scanf("%10s",&name);
	printf("Hello %s\n",name);
	
	int age;
	printf("What's Your Age?\n");
	scanf("%d",&age);
	printf("So,You're %d Years Old.",age);
	return 0;	
}