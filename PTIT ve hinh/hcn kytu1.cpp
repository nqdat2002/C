#include<stdio.h>
int main(){
	int n,m,i,j,min;
	scanf("%d%d",&n,&m);
	int max=n;
	if(m>n)
	{
	max=m;
	min=n;
	}
	else
		min=m;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(j<min)
				printf("%c",97+max-j-1);
			}
			for(j=i+1;j<=m;j++)
			{
			printf("%c",97+max-i);
			}
		printf("\n");
		}	
	return 0;
}