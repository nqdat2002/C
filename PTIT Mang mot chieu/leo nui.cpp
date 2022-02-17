#include <stdio.h>
#include<math.h>
int main(){
	long long int n,i,a,b,j,minA=50000,minB=500000;
	scanf("%lld",&n);
	long long int sum1=0,sum2=0;
	for(i=0;i<n;i++){
		scanf("%lli %lli",&a,&b);
		sum1=sum1+a;
		sum2=sum2+b;
		if(a<minA)
		minA=a;
		if(b<minB)
		minB=b;
	}
	
if(sum1+minB<sum2+minA)
	printf("%lli",sum2+minA);
	else
	printf("%lli",sum1+minB);
	return 0;
}