#include<stdio.h>

int main(){
	int b,n,j,a,i,M[100],N[100][100],A[100],max,m,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=0;j<a;j++){
			scanf("%d",&M[j]);
		}
		printf("Test %d:\n",i+1);
		b=0,A[b]=1;
	
		for(j=0;j<a-1;j++){
			
			if(M[j]<M[j+1])
			{
			N[b][A[b]]=M[j];
			A[b]++;
		}	
		else
		{
			N[b][A[b]]=M[j];
			
			b++;
			A[b]=1;
		}
		}
			max=0;
		for(j=0;j<=b;j++)
		{
			if(A[j]>max)
			max=A[j];
		}
		
		printf("%d\n",max);
		for(j=0;j<=b;j++)
		{
			if(A[j]==max){
				e=1;
				
			for(m=1;m<=max;m++){
				if(j==b&&m==max)
				N[j][m]=M[a-1];
				printf("%d ",N[j][m]);
			}
			printf("\n");
		}
		}
		
	}
	return 0;
}