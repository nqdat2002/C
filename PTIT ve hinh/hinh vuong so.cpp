#include<stdio.h>
int main(){
	int n,gt=1,M[105][105],i,j,m;
	scanf("%d",&n);
	int t=n;
	int x=2*n-1;
	for(i=1;i<=t;i++){
		for(j=i;j<=x;j++){
			M[i][j]=n;
		}
		for(j=i+1;j<=x;j++){
			M[j][x]=n;
		}
		for(j=x-1;j>=i;j--){
			M[x][j]=n;
		}
		for(j=x-1;j>i;j--){
			M[j][i]=n;
		}
		x--;
		n--;
	}
	for(i=1;i<=2*t-1;i++)
	{
		for(j=1;j<=2*t-1;j++)
		{
			printf("%d",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}