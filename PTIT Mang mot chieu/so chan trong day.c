#include<stdio.h>
int main(){
	int t,n,i,j;
	int M[100];
	scanf("%d\n",&t);
    while(t--){
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&M[j]);
		for(j=0;j<n;j++)
			if(M[j]%2==0)
			    printf("%d ",M[j]);
		printf("\n");
	}	
	return 0;
}
