#include<stdio.h>
int tong(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		sum=sum+i;
	}
	return sum;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				printf("%c ",i+(j-1)*n-tong(j)+64);
			
				
			}
		}
		printf("\n");
	}	
	return 0;
}
