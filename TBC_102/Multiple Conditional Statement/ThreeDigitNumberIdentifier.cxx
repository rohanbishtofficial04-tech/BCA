#include <stdio.h>
int main()
{
	int n;
	printf("Enter A Number\n");
	scanf("%d",&n);
	
	if(n>99 && n<1000){
		printf("It's A Three Digit Number");
	}
	else{
		printf("It's Not A Three Digit Number");
	}
return 0;	
}