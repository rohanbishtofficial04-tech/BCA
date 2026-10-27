#include <stdio.h>
int main()
{
	int num,i,prime;
    
    for(num=1;num<=300;num++){
    	prime=1;
    	for(i=2;i<num;i++){
    		if(num%i==0)
    			prime=0;
    			break;
    		}
    		if(prime){
    			printf("%d ",num);
    		}
    }
	return 0;	
}