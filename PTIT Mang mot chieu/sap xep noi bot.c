#include<stdio.h>
int main(){
	int n,i,z[100],j,a,m,b,c=0,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&z[i]);
	}
	for(i=n-1;i>0;i--)
	{
		int max=z[i];
		b=0;
		for(j=i-1;j>=0;j--)
		{
			if(z[j]>max)
			{
				max=z[j];
				a=j;
				b++;
			}
		}
			if(b==0){
			continue;
		a=i;	
		}
		for(j=0;j<n-1;j++)
		{
			if(z[j]>z[j+1])
			{
				int t=z[j];
				z[j]=z[j+1];
				z[j+1]=t;
			}
		}
		printf("\nBuoc %d: ",c+1);
		for(j=0;j<n;j++)
		printf("%d ",z[j]);
		c++;
	}
	return 0;
}
