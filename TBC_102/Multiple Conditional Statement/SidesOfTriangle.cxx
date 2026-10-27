#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Sides Of Triangle!\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b>c && b+c>a && a+c>b){
		printf("%d %d %d can be the sides of triangle",a,b,c);
	}
	else{
		printf("%d %d and %d can't be the sides of triangle",a,b,c);
	}
	return 0;	
}