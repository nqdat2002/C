#include <stdio.h>
int main(){
	int n,m,a,b,i,j,M[100][100],B[100],A[100];
	int x,t;
	scanf("%d",&t);
	for(x=0;x<t;x++){
	
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&M[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
	 A[i]=0;
		for(j=0;j<m;j++){
		A[i]=A[i]+M[i][j];
		}
		
	}
	int max=0;
	for(i=0;i<n;i++){
		if(A[i]>max)
		{
			max=A[i];
			b=i;
		}
	}
	int min=0;
	for(j=0;j<m;j++){
		B[j]=0;
		for(i=0;i<n;i++){
			if(i==b)
			continue;
		B[j]=B[j]+M[i][j];
		
		}
	
	}
	for(j=0;j<m;j++){
		if(B[j]>min){
		min=B[j];
		a=j;
	}
	}
	printf("Test %d:\n",x+1);
for(i=0;i<n;i++){
	if(i!=b)
		{
		
		for(j=0;j<m;j++){
			if(j!=a)
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	}
}
	return 0;
}
