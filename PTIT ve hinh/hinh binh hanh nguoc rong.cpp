#include<stdio.h>
int main(){
	int i,j,r,d;
	scanf("%d%d",&r,&d);
	for(i=1;i<=r;i++){
		for(j=1;j<=i-1;j++){
			printf("~");
		}
		for(j=1;j<=d;j++){
			if(j==1||j==d||i==1||i==r){
			
			printf("*");}
			else printf(".");}
	printf("\n");
	
	}
return 0;	
}