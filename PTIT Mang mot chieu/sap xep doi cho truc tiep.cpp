#include<stdio.h>
int main(){
	int n;
	int a[100];
	int i,j;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
			printf("Buoc %d: ",i+1);
			for(j=0;j<n;j++)
			    printf("%d ",a[j]);
			printf("\n");
		}
		
	
}