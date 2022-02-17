#include <stdio.h>
#include<math.h>
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
		for(j=0;j<n;j++){
			if(j>=i&&snt(M[i][j])){
				max=max+M[i][j];
			}
		}
		
	}
	printf("%d",max);
	return 0;
}