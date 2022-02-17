#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
	long int i,j;
	bool N[10000];
 	for (i = 2; i <= 10000; i++) 
    	N[i] = true;
 			 
 	for (i = 2; i <= sqrt(10000); i++)
	{
   		if (N[i] == true) 
		   	{
     		for (j = 2 * i; j <= 10000; j += i)
      				N[j] = false;
  		 	}
 	}
 	int t;
 	scanf("%d",&t);
 	while(t--){
	 	int n;
	 	scanf("%d",&n);
	 	j=2;
	 	for(j=2;j<=n/2;j++){
	 		if(N[j]==true&&N[n-j]==true)
	 		{
	 			printf("%d %d ",j,n-j);
			}
		}
		printf("\n");
	}
	return 0;
}