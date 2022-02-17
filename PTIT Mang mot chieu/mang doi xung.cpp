#include<stdio.h>
int main(){
	int n,i,j;
	int M[100];
	long long int N[100];
	int K[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&M[i]);
		K[i]=0;
		for(j=0;j<M[i];j++){
			scanf("%lli",&N[j]);
			
		}
		
		for(j=0;j<M[i];j++){
			if(N[j]==N[M[i]-1-j]){
			K[i]++;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(K[i]==(M[i]))
		printf("YES\n");
		else
		printf("NO\n");
	
	
	}
	return 0;
	}