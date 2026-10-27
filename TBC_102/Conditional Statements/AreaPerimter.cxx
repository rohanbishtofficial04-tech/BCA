#include <stdio.h>
int main()
{
	int length;
	printf("Enter The Length Of Rectangle?\n");
	scanf("%d",&length);
	
	int breadth;
	printf("Enter The Breadth Of Rectangle?\n");
	scanf("%d",&breadth);
	
	int Area,Perimeter;
	Area=length*breadth;
	Perimeter=(2*length)+(2*breadth);
	
	printf("\nArea: %d",Area);
	printf("\nPerimeter: %d",Perimeter);
	
	if(Area>Perimeter){
		printf("\nArea Is Greater Than Perimeter");
	}
	if(Area<Perimeter){
		printf("\nPerimeter Is Greater Than Area");
	}
	return 0;	
}