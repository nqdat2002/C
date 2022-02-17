#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int M[n];
	for(i=0;i<n;i++)
	{ scanf("%d",&M[i]);}

	for(i=n-1;i>=0;i--){
		printf("%d ",M[i]);
	}	
return 0;	
}