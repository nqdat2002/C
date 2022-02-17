#include<stdio.h>
int main(){
	int t,k;
	int a,b;
	int i,j,p,q,x,y;
	int M[a],N[a];
	int Z[200];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d",&a);
		for(i=0;i<a;i++)
		{
			scanf("%d",&M[i]);	
		}
		for(j=0;j<a;j++)
		{
			scanf("%d",&N[j]);
		}
		printf("Test %d:\n",k+1);
		for(i=0;i<a-1;i++)
		{
			for(x=a-1;x>i;x--)
			{
				if(M[x]<M[x-1])
				{
					int u=M[x];
					M[x]=M[x-1];
					M[x-1]=u;
				}
			}
		}	
		for(p=0;p<a+a;)
		{
			for(i=0;i<a;i++)
			{	
				Z[p]=M[i];
				p=p+2;
			}
		}   
		for(j=0;j<a-1;j++)
		{
			for(x=a-1;x>j;x--)
			{
				if(N[x]>N[x-1])
				{
					int t=N[x];
					N[x]=N[x-1];
					N[x-1]=t;
				}
			}
		}
		for(p=1;p<a+a;)
		{
			for(j=0;j<a;j++)
			{	
				Z[p]=N[j];
				p=p+2;
			}
		}                 
		for(b=0;b<a+a;b++){
			printf("%d ",Z[b]);
		}
		printf("\n")  ;
}
return 0;		
}