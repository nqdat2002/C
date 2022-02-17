#include <stdio.h>
int main(){
	int test,z;
	scanf("%d",&test);
	for(z=0;z<test;z++){
		int n,m,i,j,k,h;
		int a[100][100], b[100][100], c[100][100]={0};
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				scanf("%d",&a[i][j]);
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				b[i][j]=a[j][i];
		printf("Test %d:\n",z+1); 					
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				for(k=1;k<=m;k++)
					c[i][j]+=a[i][k]*b[k][j];
					
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0; 
}
