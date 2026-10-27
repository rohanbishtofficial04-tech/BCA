#include <stdio.h>

int main() {

  int a,b,c;

  printf("Enter three different numbers: \n");
  scanf("%d %d %d", &a, &b, &c);
  
  int greatest;
  greatest=a>b?(c>a?c:a):(b>c?b:c);
  printf("%d is greatest",greatest);
  return 0;
}