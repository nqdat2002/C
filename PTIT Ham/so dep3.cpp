#include<stdio.h>

int tong(long long int n)
{
	long long int sum=0,b=0,a=0,c=n;
	while(n){
		int i=n%10;
		sum=sum+i;
		n/=10;
		b=b*10+i;
		if(i==6)
		a++;
	}
	if(a!=0&&sum%10==8&&c==b)
	return 1;
	return 0;
}

int main(){
	long long int a,b,i;
	
	scanf("%lli%lli",&a,&b);
	if(a>b)
	{
		int t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++){
		if(tong(i))
		printf("%lli ",i);
	}
	return 0;
}