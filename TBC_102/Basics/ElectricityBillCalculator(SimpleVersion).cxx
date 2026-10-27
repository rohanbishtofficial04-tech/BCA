#include <stdio.h>
int main()
{
	printf("ELECTRICITY BILL CALCULATOR\n\n");
	int a;
	printf("Enter The Power Consumption(In Units):\n");
	scanf("%d",&a);
	
	int b;
	printf("\nNow Enter The Cost Of One Unit(In Rupees):\n");
	scanf("%d",&b);
	
	int c;
	c = a*b;
	printf("\nBILL COST: ₹%d",c);
	return 0;	
}