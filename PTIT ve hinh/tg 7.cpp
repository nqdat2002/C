#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i){
				int m,sum=0;
	for(m=1;m<j;m++){
		sum=sum+m;
	}
			printf("%d ",i+(j-1)*n-sum);
		}
		}
		printf("\n");
	}
	return 0;
}