#include<stdio.h>
int main(){
	int n,i,j,m;
	scanf("%d%d",&n,&m);
	int max=n,min=m;
	if(m>n)
	max=m,min=n;
	for(i=n+63;i>=64;i--){
		for(j=64;j<m+64;j++)
	{
		if(j>=i)
		printf("%c",j+1);		
	}	
	for(j=m+64;j<2*m+64;j++){
		if(j<i+m)
		printf("%c",m+64);
	}
	printf("\n");
	}
	return 0;
}
