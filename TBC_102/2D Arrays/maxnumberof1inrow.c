#include<stdio.h>
int main(){
    int count=0,r,max=0;
    int arr[3][4]={{1,1,0,0},{1,1,1,0},{1,1,1,1}};
    for(int i=0;i<=2;i++){
        count=0; 
        for(int j=0;j<=3;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
    if(count>max){
       max=count;
       r=i;
    }
    }
    printf("No. of 1s: %d\n",count);
    printf("Row: %d",r+1);
    return 0;
}