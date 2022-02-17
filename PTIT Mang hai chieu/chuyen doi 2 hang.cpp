#include <stdio.h>
int main(){
	int n,i,j,M[100][100],N[100],b,a,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&M[i][j]);
		}
	}
	scanf("%d%d",&a,&b);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==a-1)
			printf("%d ",M[b-1][j]);
			else if(i==b-1)
			printf("%d ",M[a-1][j]);
			else
			printf("%d ",M[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}