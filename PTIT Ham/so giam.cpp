#include<stdio.h>
int kt(int n){
	int a=0,b=0;
	while(n){
		int i=n%10;
		int j=(n/10)%10;
		if(i<j)
		a++;
		b++;
		n/=10;
	}
	if(a+1==b)
	return 1;
	return 0;
}
int main(){
	int t,i,m,n,p,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d",&m,&n);
		p=0;
		for(j=m;j<=n;j++){
			if(kt(j))
			p++;
		}
		printf("%d\n",p);
	}
	return 0;
}