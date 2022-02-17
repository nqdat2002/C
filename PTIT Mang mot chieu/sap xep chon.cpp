#include<stdio.h>
int main(){
	int n;
	int a[100];
	int i,j,k;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			printf("Buoc %d: ",i+1);
			k=i+1;
			for(j=i+1;j<n;j++)
			{	
				if(a[j]<a[k]) k=j;}
				if(a[i]>a[k]) 
				{
					int t=a[i];
					a[i]=a[k];
					a[k]=t;
				}
			for(j=0;j<n;j++)
			    printf("%d ",a[j]);
			printf("\n");
		}
}