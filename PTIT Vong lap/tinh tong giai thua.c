#include<stdio.h>
int main()
{ 
	unsigned int n;
	unsigned long long s=0;
	unsigned long long giaithua=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		giaithua*=i;
		s+=giaithua;
	}
	printf("%lld",s);
	return 0;
	
		
}
