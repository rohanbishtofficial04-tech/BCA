#include<stdio.h>
int main(){
    int sum=0,maxsum=0,r;
    int arr[3][4]={{1,2,3,41},{3,4,5,100},{5,6,7,8}};
    for(int i=0;i<=2;i++){
        sum=0;
        for(int j=0;j<=3;j++){
            sum=sum+arr[i][j];
            }
            if(sum>maxsum){
                maxsum=sum;
                r=i;
            }
    }
    printf("Max sum of row: %d\n",maxsum);
    printf("Row: %d",r+1);
    return 0;
}