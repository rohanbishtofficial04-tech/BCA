#include<stdio.h>
void fact(int n){
    int f;
    for(int i=1;i<=n;i++){
        f=n*i;
        printf("factorial: %d",f);
    }
} 
int main(){
    fact(5);
    return 0;
}

