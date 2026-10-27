// include the header files
#include <stdio.h>
#include <stdlib.h>
 
void main() {
	
  int x;
  printf("Enter a year:");
  scanf("%d", & x);
  
  // nested if statements to check Leap year 
  if (x % 4 == 0){
  	if(x%100==0){
  		if(x%400==0)
  		printf("Leap Year");
  		else
  		printf("Not a leap year");
  	}
  	else
  	printf("Leap year");
  }	
  else
  printf("Not a leap year");
}