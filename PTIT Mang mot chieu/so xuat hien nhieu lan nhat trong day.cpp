#include<stdio.h>
int main(){
	int n,i,m,h,j;
	int N[100],A[100],M[100][100],B[100][100],F[100],G[100][100],C[100];
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&N[m]);
		for(i=0;i<N[m];i++)
		{	
			scanf("%d",&M[m][i]);	
		}
	}		
	for(m=0;m<n;m++)
	{
		for(i=0;i<N[m];i++)
		{
			B[m][i]=1;
			for(j=i+1;j<N[m];j++)
			{
				if(M[m][i]==M[m][j])
				B[m][i]++;
			}
			G[m][i]=B[m][i];
			C[m]++;
			A[m]=1;
			for(j=0;j<i;j++)
			{
				if(M[m][j]==M[m][i])
				A[m]++;
			}
			if(A[m]>=2)
			{
				continue;
			}	
		}
		F[m]=0;
		for(i=0;i<N[m];i++)
		{	
			if(B[m][i]>F[m]){
			F[m]=B[m][i];
			}
		}	
		for(i=0;i<N[m];i++)
		{
			if(G[m][i]==F[m])
			printf("%d ",M[m][i]);
		}
		printf("\n");
	}
	return 0;
}