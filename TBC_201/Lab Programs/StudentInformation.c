#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter Information Of Students:\n\n");
    typedef struct{
        char firstname[10];
        int roll_no;
        float marks;
    } students;
    
    students arr[3];
    for(int i=0;i<3;i++){
        printf("For Roll No: ");
        scanf("%d",&arr[i].roll_no);
        printf("Enter First Name: ");
        scanf("%s",arr[i].firstname);
        printf("Enter Marks: ");
        scanf("%f",&arr[i].marks);
        printf("\n");
    }
    printf("\nDisplaying Information:");
    printf("\n\n");
    for(int j=0;j<3;j++){
        printf("Roll No. %d\n",arr[j].roll_no);
        printf("First Name: %s\n",arr[j].firstname);
        printf("Marks: %.1f\n",arr[j].marks);
        printf("\n");
    }    
    printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
    return 0;
}