#include<stdio.h>
int main(){
	int t,i,j,m,n,p;
	int a[105],b[105], z[300];
	scanf("%d",&t);
	for(j=0;j<t;j++){	
	
		scanf("%d%d%d",&n,&m,&p);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);	
		for(i=0;i<m;i++)
			scanf("%d",&b[i]);
			
		printf("Test %d:\n",j+1);
		
		for(i=0;i<p;i++)
			printf("%d ",a[i]);
		for(i=0;i<m;i++)
			printf("%d ",b[i]);
		for(i=p;i<n;i++)
			printf("%d ",a[i]);
			
		printf("\n");
	}
	return 0;
}
