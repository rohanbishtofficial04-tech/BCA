#include <stdio.h>
int main()
{
	int a;
	int i;
	printf("Enter A Number!\n");
	scanf("%d",&a);
	printf("\nTable of %d\n\n",a);
	for (i = 1;i<=10;i++){
	int b = a*i;
			printf("\n%d*%d=%d",a,i,b);
	}
	return 0;	
}