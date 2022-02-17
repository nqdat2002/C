#include<stdio.h>
int main(){
	int n,i,f,m;
	int M[100000],N[100];
	scanf("%d",&m);
	for(f=0;f<m;f++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{	
			scanf("%d",&M[i]);	
		}
		int c=1;
		for(i=0;i<n;i++)
		{
			int j;
			int dem=1;
			for(j=i+1;j<n;j++)
			{
			if(M[i]==M[j])
			dem++;		
			}		
			if(dem>=2)
			{
				printf("%d\n",M[i]);
				c++;
				break;		
			}
			else
			{	
			continue;	
			}
		}
		if(c==1)
		printf("NO\n");
	}
	return 0;
	}