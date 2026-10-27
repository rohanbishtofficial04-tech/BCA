// Alternate Flower Planting
#include <stdio.h>
#include<stdbool.h>
bool canPlaceFlowers(int *flowerbed, int bedSize, int n)
{
    int count=0;
    for(int i=0;i<bedSize-1;i++){
        if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1;
            count++;
        }
    }
    if(count>=n) return true;
    else return false;
}
int main()
{
    int flowerBed[] = {1, 0, 0, 0, 0, 0, 1};
    int bedSize = sizeof(flowerBed) / sizeof(flowerBed[0]);
    int n=2;
    if(canPlaceFlowers(flowerBed,bedSize,n)){
        printf("Yes, You can plant %d flowers in this flowerbed.",n);
    }
    else{
        printf("No, You can't place %d flowers in this flowerbed.",n);
    }
    return 0;
}