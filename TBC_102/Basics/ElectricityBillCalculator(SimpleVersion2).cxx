#include <stdio.h>
int main()
{
	printf("ELECTRICITY BILL CALCULATOR\n\n");
	int a;
	printf("Enter The Initial Reading Of Energy Meter At The Beginning Of The Month(In kWh):\n");
	scanf("%d",&a);
	
	int b;
	printf("\nEnter The Final Reading Of Energy Meter At The End Of The Month(In kWh):\n");
	scanf("%d",&b);
		
	int c;
	printf("\nEnter Cost Of Per Unit Of Electrical Energy(In Rupees):\n₹");
	scanf("%d",&c);
				
	int d;
	d = b-a;
	printf("\nTotal Units Of Electrical Energy Consumed This Month: %d Units\n",d);
	
	int e;
	e = d*c;
	printf("\nBill Cost: ₹%d",e);
	return 0;	
}