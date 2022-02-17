#include <stdio.h>
int main(){
	int n,m,i,j,k,h;
	int a[100][100],b[100][100];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0; 
}