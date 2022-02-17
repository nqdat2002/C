#include<stdio.h>
int main(){
	long long int n,gt=0,M[105][105],N[100],i,j,m,c;
	scanf("%d",&n);
	int t=n;
	N[0]=0;N[1]=1;int a=0,b=1;
	for(i=2;i<n*n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		N[i]=c;
	}
	for(i=1;i<=t/2+1;i++)
	{
		for(j=i;j<=n;j++)
		{
			M[i][j]=N[gt];
			gt++;
		}
		for(j=i+1;j<=n;j++)
		{
			M[j][n]=N[gt];
			gt++;
		}
		for(j=n-1;j>=i;j--)
		{
			M[n][j]=N[gt];
			gt++;
		}
		for(j=n-1;j>i;j--)
		{
			M[j][i]=N[gt];
			gt++;
		}
		n--;
	}
	for(i=1;i<=t;i++)
	{
		for(j=1;j<=t;j++)
		{
			printf("%lli ",M[i][j]);
		}
		printf("\n");
	}		
	return 0;
}