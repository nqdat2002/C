#include<stdio.h>
#include<stdbool.h>
long long int max(long long int n){
	long long int kq=0,a[100];
	int j=0,t;
	while(n){
		int i=n%10;
		if(i==5||i==6)
		{
			if(i==5)
			i=6;
		}
		a[j++]=i;
		n/=10;
		}
	for(t=j-1;t>=0;t--)
		kq=kq*10+a[t];
	return kq;
}
long long int min(long long int n){
	long long int kq=0,a[100];
	int j=0,t;
	while(n){
		int i=n%10;
		if(i==5||i==6)
		{
			if(i==5)
			i=5;
			else
			i=5;

		}
		a[j++]=i;
		n/=10;
		}
	for(t=j-1;t>=0;t--)
		kq=kq*10+a[t];
	return kq;
}
int main()
{	
	int t;
	int i,j;
	long long int M[100][2];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%lld %lld",&M[i][0],&M[i][1]);	
	printf("%lld %lld\n",min(M[i][0])+min(M[i][1]),max(M[i][0])+max(M[i][1]));
	}
    return 0;
}