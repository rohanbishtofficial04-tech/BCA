#include <stdio.h>

int main() {
  int op;
  double first,second;
  while(1){
  printf("Choose 1 to Add Two Numbers.\nChoose 2 to Subtract Two Numbers.\nChoose 3 to Multiply Two Numbers.\nChoose 4 to Divide Two Numbers.\nChoose Any Other Number to Exit.\n\n");
  scanf("%d", &op);
  
  if(op>=5){
  	break;
  	}
  
  switch (op) {
    case 1:
      printf("\nEnter the first Number\n");
                scanf("%lf",&first);
                printf("Enter the second Number\n");
                scanf("%lf",&second);
                printf("The Addition of  %.1lf and %.1lf is: %.1lf\n\n",first,second,first+second);
      break;
      
    case 2:
      printf("\nEnter the first Number\n");
                scanf("%lf",&first);
                printf("Enter the second Number\n");
                scanf("%lf",&second);
                printf("The Subtraction of  %.1lf and %.1lf is: %.1lf\n\n",first,second,first-second);
      break;
      
    case 3:
      printf("\nEnter the first Number\n");
                scanf("%lf",&first);
                printf("Enter the second Number\n");
                scanf("%lf",&second);
                printf("The Multiplication of  %.1lf and %.1lf is: %.1lf\n\n",first,second,first*second);
      break;
      
    case 4:
      printf("\nEnter the first Number\n");
                scanf("%lf",&first);
                printf("Enter the second Number\n");
                scanf("%lf",&second);
                printf("The Division of  %.1lf and %.1lf is: %.1lf\n\n",first,second,first/second);
      break;
      
    default:
      printf("\nError! operator is not correct\n\n");
  }
  }
  return 0;
}