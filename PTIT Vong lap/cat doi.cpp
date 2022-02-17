#include<stdio.h>
int check2(long long int n){
		int a=0,b=0;
		while(n){
			int i=n%10;
			if(i==0||i==8||i==9||i==1)
			a++;
			b++;
			n/=10;
		}
		if(a==b)
		return 1;
		return 0;
	}
long long int check1(long long int n){
	long long int kq=0,a[100];
	int j=0,t;
	while(n){
		int i=n%10;
		if(i==8||i==9||i==0||i==1)
		{
			if(i==1)
			i=1;
			else
			i=0;
		}
		a[j++]=i;
		n/=10;
		}
	for(t=j-1;t>=0;t--)
	{
		kq=kq*10+a[t];
	}
	return kq;
}
int main(){
	long long int n,i,a,M[1000];
	scanf("%lli",&n);
	for(i=0;i<n;i++){
		scanf("%lli",&M[i]);
	}
	for(i=0;i<n;i++){
		if(check2(M[i])==0||check1(M[i])==0)
		printf("INVALID\n");
		else if(check2(M[i])==1&&check1(M[i])!=0)
		printf("%lli\n",check1(M[i]));
		
	}
	return 0;
}