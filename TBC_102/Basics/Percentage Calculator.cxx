#include <stdio.h>
int main()
{
	int Physics;
	printf("Enter Your Physics Marks!\n");
	scanf("%d",&Physics);
	
	int Chemistry;
	printf("Enter Your Chemistry Marks!\n");
	scanf("%d",&Chemistry);
	
	int Maths;
	printf("Enter Your Maths Marks!\n");
	scanf("%d",&Maths);
	
	int Computer;
	printf("Enter Your Computer Marks!\n");
	scanf("%d",&Computer);
	
	int English;
	printf("Enter Your English Marks!\n");
	scanf("%d",&English);
	
	float Percentage = ((Physics+Chemistry+Maths+Computer+English)/500.0)*100.0;
	printf("The Percentage is : %f!",Percentage);
	return 0;	
}