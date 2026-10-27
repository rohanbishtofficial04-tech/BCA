#include <stdio.h>
int main()
{
	int num,i,n1,n2,prime;
	printf("Enter two Numbers\n");
	scanf("%d%d",&n1,&n2);
    
    for(num=n1;num<=n2;num++){
    	prime=1;
    	for(i=2;i<num;i++){
    		if(num%i==0){
    			prime=0;
    			break;
    		}
    		}
    		if(prime)
    			printf("%d ",num);
    }
	return 0;	
}