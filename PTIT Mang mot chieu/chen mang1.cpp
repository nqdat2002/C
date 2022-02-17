#include<stdio.h>
int main(){
	int n,m,p;
	scanf("%d%d",&n,&m);
	int a[n],b[m], r[m+n];
	int i;
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{scanf("%d",&b[i]);
	}
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{r[i]=a[i];
	}
	for(i=p;i<m+p;i++)
	{r[i]=b[i-p];
	}
	for(i=p+m;i<m+n;i++){
		r[i]=a[i-m];
	}
	for(i=0;i<m+n;i++){
		printf("%d ",r[i]);
	}
return 0;	
}