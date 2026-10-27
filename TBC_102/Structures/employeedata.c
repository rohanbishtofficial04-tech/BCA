#include<stdio.h>
#include<string.h>
int main(){
    typedef struct{
        char firstname[10];
        char lastname[10];
        int age;
        float salary;
    }employee;
    
    employee arr[1];
    for(int i=0;i<1;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%f",&arr[i].salary);
    }

    for(int j=0;j<1;j++){
        printf("\nName: %s %s\n",arr[j].firstname,arr[j].lastname);
        printf("Age: %d\n",arr[j].age);
        printf("Salary: %.2f\n\n",arr[j].salary);
    }
    return 0;
}