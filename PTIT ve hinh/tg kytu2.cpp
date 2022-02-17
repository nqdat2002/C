#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=65;i<2*n+65;i+=2){
		for(j=65;j<2*n+65;j+=2)
	{
		if(j>=i)
		printf("%c",j);	
	}
	printf("\n");
	}	
	return 0;
}