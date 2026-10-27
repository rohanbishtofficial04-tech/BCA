#include <stdio.h>
int main()
{
	int a;
	printf("Enter A Number");
	scanf("%d",&a);
	
	int absolute;
	if(a<=0){
		absolute=(a*-1);
		printf("Absolute Value Of %d is %d",a,absolute);
	}
	else{
		absolute=(a*1);
			printf("Absolute Value Of %d is %d",a,absolute);
	}
	return 0;	
}