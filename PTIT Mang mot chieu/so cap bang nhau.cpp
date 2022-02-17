#include<stdio.h>
int main(){
	int m,max,n,i,j,M[100],N[100][100],E[100][100],A[100];
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&M[m]);
		for(i=0;i<M[m];i++){
		scanf("%d",&N[m][i]);
		E[m][i]=N[m][i];
	}
	}
	for(m=0;m<n;m++){
		A[m]=0;
		for(i=0;i<M[m]-1;i++){
				if(N[m][i]==N[m][i+1])
					A[m]++;
				}
  printf("%d\n",A[m]);		
	}
	return 0;
}