#include<stdio.h>
int main()
{
    int Physics;
    printf("Enter Physics Marks!\n");
    scanf("%d",&Physics);

    int Chemistry;
    printf("Enter Chemistry Marks!\n");
    scanf("%d",&Chemistry);

    int Maths;
    printf("Enter Maths Marks!\n");
    scanf("%d",&Maths);

    int English;
    printf("Enter Your English Marks!\n");
    scanf("%d",&English);
    
    int Computer;
    printf("Enter Your Computer Marks!\n");
    scanf("%d",&Computer);

    int Aggregate=(Physics+Chemistry+Maths+English+Computer);
    printf("\n\nAggregate Marks: %d",Aggregate);

    float Percentage=(Physics+Chemistry+Maths+English+Computer)/5;
    printf("\n\nPERCENTAGE: %f",Percentage);
    return 0;
}