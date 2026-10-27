#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("\n");
        int a=65;
        
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",a);
            }
                else{
                    printf("%d ",j);
                }
                a++;
            }
        }
    return 0;
}