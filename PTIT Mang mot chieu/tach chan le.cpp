#include <stdio.h>
int main() {
	int n,i;
	int M[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&M[i]);
	}
	for(i=0;i<n;i++){
			if(M[i]%2==0){
				printf("%d ",M[i]);
			}
		}
		printf("\n");
			for(i=0;i<n;i++){
			if(M[i]%2==1)
			{
				printf("%d ",M[i]);
			}
		}

	return 0;
}