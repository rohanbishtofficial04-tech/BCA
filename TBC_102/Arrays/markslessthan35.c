#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<=9;i++){
        printf("Enter marks of roll no.%d student\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int j=0;j<=9;j++){
        if(marks[j]<35){
            printf("\nRoll no.:");
            printf("%d ",j+1);
        }
    }
    printf("\nThese Students have marks less than 35");
    return 0;
}