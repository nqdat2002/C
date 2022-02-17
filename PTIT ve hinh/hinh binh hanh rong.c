#include<stdio.h>
int main(){
	int i,j,r;
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf("~");
		}
		for(j=1;j<=r;j++){
			if(j==1||j==r||i==1||i==r){
			
			printf("*");}
			else printf(".");
			}	
	printf("\n");
	
	}
return 0;	
}
