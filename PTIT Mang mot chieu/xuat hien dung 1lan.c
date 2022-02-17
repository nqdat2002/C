#include<stdio.h>
int main(){
	int n,i;
	int X[100]; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&X[i]);
	}
	int a=0;
	for(i=0;i<n;i++)
	{
	int j,dem=0;
	for(j=0;j<n;j++){
		if(X[j]==X[i])
		dem++;
	}	
	if(dem==1)
	a++;
	}
	printf("%d\n",a);
	for(i=0;i<n;i++)
	{
	int j;
	int dam=0;
	for(j=0;j<n;j++){
		if(X[j]==X[i])
		dam++;
	}	
	if(dam==1)
	printf("%d ",X[i]);
	}
	return 0;
}
