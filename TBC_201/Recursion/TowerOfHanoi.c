#include <stdio.h>
// n is the no of disks to be moved, source is the rod where disk is present, destination is the rod where disks is to be moved, auxillary is empty(also known as helping rod)
void towerOfHanoi(int n, char source, char auxillary, char destination)
{
    if(n == 1){ //1
        printf("\n Move disk 1 from rod %c to rod %c", source,destination); //5
        return; 
    }

    towerOfHanoi(n-1,source,destination,auxillary); //2   to move n-1 disks from source rod to auxillary rod
    towerOfHanoi(1,source,auxillary,destination); //3     to move the largest disk to destination rod
    towerOfHanoi(n-1,auxillary,source,destination); //4   to move n-1 disk from auxillary to destination rod
}
int steps(int n,int s){
    if(s==0) return 1;
    else return n*steps(n,s-1);
}
 
int main()
{
    int n,s;
    char source, destination, auxiliary;

    printf("Enter the number of disks: ");
    scanf("%d", &n);
    if(n>0){
    printf("Enter the name of source rod: ");
    scanf(" %c", &source);
    printf("Enter the name of destination rod: ");
    scanf(" %c", &destination);
    printf("Enter the name of auxiliary rod: ");
    scanf(" %c", &auxiliary);
    towerOfHanoi(n, source, destination, auxiliary);
    s=steps(2,n);
    printf("\n\n\nNo. of steps taken: %d",s-1); // No. of steps = 2^n-1 where n is the no. of disks
    }
    else
    printf("Not Valid");
    return 0;
}