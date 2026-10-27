#include <stdio.h>
int main()
{
	int cost;
	printf("Enter Cost Price Of An Item!\n");
	scanf("%d",&cost);
	
	int sell;
	printf("Enter Selling Price Of That Item!\n");
	scanf("%d",&sell);
	
	printf("You Sell An Item Of Cost Rs %d In Rs %d",cost,sell);
	
	
	int profit;
	profit=sell-cost;
	
	if(cost<sell){
		printf("\nYou Got A Profit Of Rs %d",profit);
	}
	if(cost>sell){
		profit=(profit*-1);
		printf("\nYou Got A Loss Of Rs % dickhead!",profit);
	} 
	if(cost==sell){
		printf("\nYou Got No Profit,No Loss");	
	}
	return 0;	
}