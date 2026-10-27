#include <stdio.h>
int main()
{
	int num,count=0;
	printf("Enter A Number\n");
	scanf("%d",&num);
	
	while(num>0){
		num=num/10;
		count++;
		}
		printf("Number Of Digits: %d",count);	
	return 0;	
}