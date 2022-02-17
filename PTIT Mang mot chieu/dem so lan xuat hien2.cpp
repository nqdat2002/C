#include<stdio.h>
int a[100],b[100];
int n,t;
int i,j,k;
int main(){
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",k+1);
		for(i=0;i<n;i++)
		{
	 		b[i]=1;
		}
		for(i=0;i<n;i++)
		{
			int count=1;
			if(b[i]){
				b[i]=0;
				for(j=1+i;j<n;j++)
				{
					if(a[j]==a[i]) 
				{
					count++;
					b[j]=0;
				}
			}	
		printf("%d xuat hien %d lan\n",a[i],count);	
			}
		}
	}	
	return 0;
}