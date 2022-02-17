#include <stdio.h>
#include <math.h>
int snt(int x){
	
	int i;
	if(x<2)
	return 0;
	for(i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
int main(){
	int n,i,j,M[100][100],N[100],b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
		}
	}
	int max=0;
	for(i=0;i<n;i++){
		N[i]=0;
		for(j=0;j<n;j++){
			if(snt(M[i][j]))
			N[i]++;
		}
		if(N[i]>max)
		{
			max=N[i];
			b=i;	
		}
	}
	printf("%d\n",b+1);
	for(i=0;i<n;i++){
		if(snt(M[b][i]))
		printf("%d ",M[b][i]);
	}
	return 0;
}
