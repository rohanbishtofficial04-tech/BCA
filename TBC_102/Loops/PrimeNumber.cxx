#include <stdio.h>
int main()
{
	int num,i,n,prime;
	printf("Enter A Number\n");
	scanf("%d",&n);
    
    for(num=2;num<=n;num++){
    	prime=1;
    	for(i=2;i<num;i++){
    		if(num%i==0){
    			prime=0;
    			break;
    		}
    		}
    		if(prime==1){
    			printf("%d ",num);
    		}
    }
	return 0;	
}