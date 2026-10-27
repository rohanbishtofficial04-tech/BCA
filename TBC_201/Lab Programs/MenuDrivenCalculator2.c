#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int sum(int n){
    if(n==0) return 0;
    else return (n%10)+sum(n/10);
}
int main(){
  int a,b;
  int op;
  while(1){
  printf("**********Calculator**********\n");
  printf("1. Factorial\n2. Nth term of fibonacci series\n3. Power\n4. Greatest Common Divisor(GCD)\n5. Sum Of Digits\n6. Exit\n");
  printf("\nSelect an option (1-5) for operation and 6 for exit: \n");
  scanf("%d", &op);
  if(op==6){
    printf("Thank you for trying!");
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    break;
  }
  if(op<=5){
  switch(op){
    case 1:
      printf("Enter a number\n");
      scanf("%d",&a);
      printf("Result: %d\n\n",fact(a));
      break;
    case 2:
      printf("Enter a number\n");
      scanf("%d",&a);
      printf("Result: %d\n\n",fibo(a));
      break;
    case 3:
      printf("Enter a number\n");
      scanf("%d",&a);
      printf("Enter power\n");
      scanf("%d",&b);
      printf("Result: %d\n\n",power(a,b));
      break;
    case 4:
      printf("Enter Two Numbers\n");
      scanf("%d%d",&a,&b);
      printf("Result: %d\n\n",gcd(a,b));
      break;
    case 5:
      printf("Enter a Numbers\n");
      scanf("%d",&a);
      printf("Result: %d\n\n",sum(a));
      break;
  }
  }
  else{
    printf("Not a valid option!\n\n");
  }
  }
  return 0;
}