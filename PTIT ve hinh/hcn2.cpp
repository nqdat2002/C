#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(j==0) printf("%d",i+1);
			else if(i==0) printf("%d",j+1);
			else if(i<b-j) printf("%d",i+j+1);
			else if(i>=b) printf("%d",i-j+1);
			else {
			printf("%d",2*b-i-j-1);}
				}	
			printf("\n");
		}
	return 0;		
}