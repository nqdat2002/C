#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*i-1;j++)
		{
		if(i<=2*i-1){		
		if(j<=(2*i-1)/2)
		printf("%c",2*j-1+63);
		else
		printf("%c",2*j-1-4*(j-i)+63);
				}
		}
	printf("\n");
	}		
	return 0;
}
