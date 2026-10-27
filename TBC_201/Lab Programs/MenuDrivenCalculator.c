#include <stdio.h>
int add(int a,int b){
  return a+b;
}
int sub(int a,int b){
  return a-b;
}
int multiply(int a,int b){
  return a*b;
}
int divide(int a,int b){
  return a/b;
}
int mod(int a,int b){
  return a%b;
}
int main(){
  int op;
  int a,b;
  while(1){
  printf("**********Calculator**********\n");
  printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo Division\n6. Exit\n");
  printf("\nSelect an option (1-5) for operation and 6 for exit: \n");
  scanf("%d", &op);
  if(op==6){
    printf("Thank you for trying!");
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    break;
  }
  if(op<=6){
  printf("Enter two operands:\n");
  scanf("%d%d", &a, &b);

  switch(op){
    case 1:
      printf("Result: %d\n\n",add(a,b));
      break;
    case 2:
      printf("Result: %d\n\n",sub(a,b));
      break;
    case 3:
      printf("Result: %d\n\n",multiply(a,b));
      break;
    case 4:
      printf("Result: %d\n\n",divide(a,b));
      break;
    case 5:
      printf("Result: %d\n\n",mod(a,b));
      break;
  }
  }
  else{
    printf("Not a valid option!\n\n");
  }
  }
  return 0;
}