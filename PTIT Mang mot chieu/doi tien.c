#include<stdio.h>
#define max 10
int main()
{
    int a[10] = {1000,500,200,100,50,20,10,5,2,1};
    int t;
    int i;
    scanf("%d",&t);
    while(t--){
    	long long k,kq=0;
		scanf("%lld",&k);
       		for(i=0;i<max;i++)
       		{
       			kq+=k/a[i];
       			k%=a[i];
			   }
   		printf("%lld\n",kq);         
    }  
	return 0; 
}
