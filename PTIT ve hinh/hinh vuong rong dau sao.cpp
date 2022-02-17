#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{if(i==1||j==1||i==a||j==a)
			{printf("*");	
						}
		else{printf(".");}}
		printf("\n");
	}
	}