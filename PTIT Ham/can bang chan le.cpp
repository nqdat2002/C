#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int tn(long long int x) {
    int c=0,d=0;
    while(x) {
        int i=x%10;
        if(i%2==0) c++;
        else d++;
        x/=10;
    }
    if(c==d)
    return true;
    return false;
}
int main() {
   	long long int m,j,i=0;
    scanf("%lli",&m);
    if(m%2==0){
    	for(j=pow(10,m-1); j<pow(10,m); j++)
		{
      	  	if(tn(j))
        	{
        		printf("%d ",j);
      			i++;
     			if(i%10==0) printf("\n");
 			}		
    	}
    }
return 0;
}