#include<stdio.h>
int main(){
	int i,j,dai,rong;
	scanf("%d%d",&rong,&dai);
	for(i=1;i<=rong;i++){
		for(j=1;j<=i-1;j++)
		{
			printf("~");
		}
		for(j=1;j<=dai;j++)
		{
			printf("*");
		}
	printf("\n");
	}
return 0;	
}
