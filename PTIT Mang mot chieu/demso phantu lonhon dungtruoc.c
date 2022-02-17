#include<stdio.h>
int main(){
	int n,i,j,m,a,b;
	int N[100],M[100][100];
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
	scanf("%d",&N[m]);
	for(i=0;i<N[m];i++)
		{	
			scanf("%d",&M[m][i]);	
		}
	}
	for(m=0;m<n;m++)
	{
		b=0;
		for(i=0;i<N[m];i++){
			a=0;
			for(j=0;j<i;j++){
				if(M[m][i]<M[m][j])
				a++;	
			}
			if(a==0)
			b++;
		}
		printf("%d\n",b);	
	}
	return 0;
}
