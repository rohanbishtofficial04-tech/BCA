 #include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;      
    }
int ncr(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter number of rows\n");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        printf("\n\n");
        for(int k=1;k<=n-i;k++){
            printf("    ");
        }
        for(int j=0;j<=i;j++){
            int icj=ncr(i,j);
            printf("    %d    ",icj);
        }      
    }
    return 0;
}