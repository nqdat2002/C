#include<stdio.h>
int a[105][105];
int i,j,n,d,gt,hang,cot;
int tao(int n)
{
	d=0;gt=n*n;hang=n-1;cot=n-1;
	while(d<=n/2){
	for(i=d;i<=cot;i++)
		a[d][i]=gt--;
	for(i=d+1;i<=hang;i++)
		a[i][cot]=gt--;
	for(i=cot-1;i>=d;i--)
		a[hang][i]=gt--;
	for(i=hang-1;i>d;i--)
		a[i][d]=gt--;
	d++;
	hang--;cot--;}
}
int ink(int n){
	for(i=0;i<n;i++)
	{		
		for(j=0;j<n;j++)
		 printf("%d ",a[i][j]);
	printf("\n\n");
	}
	}
int main()
{	int t;
	int k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
		scanf("%d",&n);
		printf("Test %d:\n",k+1);
		tao(n);
		ink(n);
	}
	return 0;	
		
}