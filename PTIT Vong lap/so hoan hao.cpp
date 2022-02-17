#include<stdio.h>
int main()
	{int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0) {s+=i;
	}}	
	
	if (s!=n) printf("0");
	else printf("1");
return 0;	
	}