#include<stdio.h>
int main()
	{ int n,t=1;
	scanf("%d",&n);
	while(n>0){
		t*=n%10;
		n/=10;}
	printf("%d",t);	return 0;
}
