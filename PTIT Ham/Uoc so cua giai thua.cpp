#include<stdio.h>
int so(int b,int a){
	int c=0;
	int j;
	for(j=a;j<=b;j+=a){
		int d=j;
		while(d%a==0)
		{
			c++;
			d/=a;
		}
	}
	return c;
}
int main(){
	int t,m,n;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",so(m,n));
	}
	return 0;
}