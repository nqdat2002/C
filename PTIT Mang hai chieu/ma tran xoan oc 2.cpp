#include<stdio.h>
int main(){
	int n,gt,M[105][105],N[1000],A[1000],i,j,m,f,z;
	scanf("%d",&f);
	for(z=0;z<f;z++){
		gt=0;
	scanf("%d%d",&n,&m);
	int t=n,x=m;
    for(i=1;i<=n;i++)
	{
    	for(j=1;j<=m;j++)
		{
    		scanf("%d",&M[i][j]);
		}
	}
		for(i=1;i<=x/2+1;i++)
		{
			for(j=i;j<=m;j++)
			{
				A[gt++]=M[i][j];
			}
			for(j=i+1;j<=n;j++)
			{
				A[gt++]=M[j][m];
			}
			for(j=m-1;j>=i;j--)
			{
				A[gt++]=M[n][j];
			}
			for(j=n-1;j>i;j--)
			{
				A[gt++]=M[j][i];
			}
			n--,m--;
		}
		for(i=0;i<t*x;i++)
			{
			printf("%d ",A[i]);
			}
	printf("\n");
	}
	return 0;
}