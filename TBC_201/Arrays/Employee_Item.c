#include<stdio.h>
int main(){
    int e,it,emp=0,item=0;
    printf("Enter number of employees: ");
    scanf("%d",&e);
    printf("Enter number of item: ");
    scanf("%d",&it);
    int arr[e][it];
    for(int i=0;i<e;i++){
        for(int j=0;j<it;j++){
            printf("Enter Employee %d Item %d Price\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<e;i++){
        emp=0;
        for(int j=0;j<it;j++){
            emp=emp+arr[i][j];
        }
        printf("\nEmployee %d Total Sales: %d",i+1,emp);
    }
    for(int i=0;i<e;i++){
        item=0;
        for(int j=0;j<it;j++){
            item=item+arr[j][i];
        }
        printf("\nItem %d Total Sales: %d",i+1,item);
    }
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");  
    return 0;
}