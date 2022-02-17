#include <stdio.h>
int main(){
	int n,i,j,M[100][100],N[100],b,a,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			printf("%d ",M[i][n-i-1]);
			else if(j==n-i-1)
			printf("%d ",M[i][n-j-1]);
			else
			printf("%d ",M[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
