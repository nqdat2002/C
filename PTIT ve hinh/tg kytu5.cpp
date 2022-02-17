#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--){
		for(j=0;j<n;j++){
			if(i>=j)
			printf("%c",j+64+i);
		}
	printf("\n");
	}	
	return 0;
}