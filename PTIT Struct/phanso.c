#include<stdio.h>
int ucln(int a,int b){
	int c;
	if(a==b)
	return b;
	while(b!=a)
	{
		if(a>b)
		c=a-b;
		else
		c=b-a;
		a=b;
		b=c;
	}
	return c;
}
int main(){
	int n,i,j,m[10000],p[10000],q[10000],d[10000],boi[10000],e[10000],f[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d%d",&m[i],&p[i],&q[i],&d[i]);
		e[i]=m[i];
		f[i]=q[i];
	}
	for(i=0;i<n;i++){
		m[i]=m[i]/ucln(m[i],p[i]);
		p[i]=p[i]/ucln(e[i],p[i]);
		q[i]=q[i]/ucln(q[i],d[i]);
		d[i]=d[i]/ucln(f[i],d[i]);
		 boi[i]=p[i]*d[i]/ucln(p[i],d[i]);
		printf("Case #%d:\n",i+1);
		printf("%d/%d %d/%d\n",m[i]*boi[i]/p[i],boi[i],q[i]*boi[i]/d[i],boi[i]);
		printf("%d/%d\n",m[i]*boi[i]/p[i]+q[i]*boi[i]/d[i],boi[i]);
		printf("%d/%d\n",m[i]*d[i]/ucln(m[i]*d[i],p[i]*q[i]),p[i]*q[i]/ucln(m[i]*d[i],p[i]*q[i]));
	}
	return 0;
}
