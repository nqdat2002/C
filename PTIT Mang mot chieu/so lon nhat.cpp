#include<stdio.h>
int main(){
	int m,max,n,i,j,M[100],N[100][100],E[100][100];
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
		for(i=0;i<M[m]-1;i++){
			for(j=i+1;j<M[m];j++){
				if(N[m][i]>N[m][j])
				{
					int t=N[m][i];
					N[m][i]=N[m][j];
					N[m][j]=t;
				}
			}				
		}
		printf("%d\n",N[m][M[m]-1]);
		for(i=0;i<M[m];i++){
			if(N[m][M[m]-1]==E[m][i])
			printf("%d ",i);		
		}
		printf("\n");
	}
	return 0;
}