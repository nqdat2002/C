#include<stdio.h>
#include<math.h>
int snt(int x)
{
	int i;
    if (x < 2)
        return 0;
    for (i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int main(){
	int n,gt,M[105][105],N[400],i,j,m,f,z;
	scanf("%d",&f);
	for(z=0;z<f;z++)
	{
		gt=0;
		scanf("%d",&n);
		int t=n;
   	 int a=2;
    	for ( i = 0; i < n*n;)
		{
     	   if (snt(a))
			{
        		N[i]=a;
        		i++;
			}
			a++;
		}	
		for(i=1;i<=t/2+1;i++)
		{
			for(j=i;j<=n;j++)
			{
				M[i][j]=N[gt++];
			}
			for(j=i+1;j<=n;j++)
			{
				M[j][n]=N[gt++];
			}
			for(j=n-1;j>=i;j--)
			{
				M[n][j]=N[gt++];
			}
			for(j=n-1;j>i;j--)
			{
				M[j][i]=N[gt++];
			}
			n--;
		}
		printf("Test %d:\n",z+1);
		for(i=1;i<=t;i++)
			{
			for(j=1;j<=t;j++)
			{
				printf("%d ",M[i][j]);
			}
			printf("\n");
			}
	}
	return 0;
}