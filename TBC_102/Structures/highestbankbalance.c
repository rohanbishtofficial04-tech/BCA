#include<stdio.h>
#include<string.h>
int main(){
    int max=0;
    int max_balance=0;
    typedef struct{
        int acc_no;
        char acc_holder_first_name[10];
        char acc_holder_last_name[10];
        float balance;
    } accountholder;

    accountholder arr[2];

    for(int i=0;i<2;i++){
        scanf("%d",&arr[i].acc_no);
        scanf("%s",arr[i].acc_holder_first_name);
        scanf("%s",arr[i].acc_holder_last_name);
        scanf("%f",&arr[i].balance);
    }

    for(int k=0;k<2;k++){
        if(arr[k].balance>max_balance){
            max_balance=arr[k].balance;
            max=k;
        }
    }

    for(int i=0;i<2;i++){
        printf("\n%d\n",arr[i].acc_no);
        printf("%s %s\n",arr[i].acc_holder_first_name,arr[i].acc_holder_last_name);
        printf("$%.2f\n\n",arr[i].balance);
    }

    printf("Max Balance Account Detail:");
    printf("\n%d\n",arr[max].acc_no);
    printf("%s %s\n",arr[max].acc_holder_first_name,arr[max].acc_holder_last_name);
    printf("$%.2f\n\n",arr[max].balance);
    return 0;
}
