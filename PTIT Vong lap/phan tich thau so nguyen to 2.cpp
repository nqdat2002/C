#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2 ; n>1 ; ){						// dieu kien lap la n>1; 
	    if(n==i){
	    	printf("%d",i);   // vi du  2,3,5       2,3,5,7
	    	break;
		}
		if(n%i==0){		
			printf("%dx",i);   
			n=n/i;
		}
		else i++;	
	}
	return 0;
}