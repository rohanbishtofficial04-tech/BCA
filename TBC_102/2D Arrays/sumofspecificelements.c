#include<stdio.h>
int main(){
int arr[4][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
int r1,c1,r2,c2,sum=0;
printf("Enter starting row and column\n");
scanf("%d%d",&r1,&c1);
printf("Enter ending row and column\n");
scanf("%d%d",&r2,&c2);
for(int i=r1;i<=r2;i++){
    for(int j=c1;j<=c2;j++){
        sum=sum+arr[i][j];
    }
}
printf("Sum of elements from index (%d,%d) to (%d,%d): %d",r1,c1,r2,c2,sum);
return 0;
}
