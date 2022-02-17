#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
	{
		if(i>=j&&i%2==0)
		printf("%d",2*j);
		else if(i>=j&&i%2!=0)
		printf("%d",2*j-1);
	}
	printf("\n");
	}		
	return 0;
}