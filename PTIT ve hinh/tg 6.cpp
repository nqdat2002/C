#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--)
	{
		if(j<=i){
			printf("%d",2*i+2-2*j);
		}
		else
		printf("~");		
	}
	if(i!=1){
	
	for(j=n+2;j<=2*n;j++){
		if(i>=j-n)
		printf("%d",2*i+2-2*(j-n));
	}
}
	printf("\n");
	}	
	return 0;
}