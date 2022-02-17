#include<stdio.h>
int main(){
	int i,tong;
	long long j;
	int n;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{	int t=0;
		while(A[i]>0){
		tong=A[i]%10;
		A[i]/=10;
		t=t+tong;
		}
		if(t%10==0)
		printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}
