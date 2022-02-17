#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	int M[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&M[i]);	
	}
	for(i=0;i<n;i++)
	{
		int j;
		for(j=i+1;j<n;j++){
			if(M[i]>M[j])
			{	
				int t=M[i];
				M[i]=M[j];
				M[j]=t;
			}	
			}
	}
	if(M[n-1]!=M[n-2])
	printf("%d %d",M[n-1],M[n-2]);
	else
	printf("%d %d",M[n-1],M[n-3]);
	return 0;	
}