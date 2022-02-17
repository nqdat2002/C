#include<stdio.h>
int main(){
	int n,i;
	int M[100]; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&M[i]);
	}
	int m;
	scanf("%d",&m);
	for(i=n-m;i<n;i++){
		printf("%d ",M[i]);
	}
	for(i=0;i<n-m;i++)
	{
		printf("%d ",M[i]);
	}
	return 0;
}