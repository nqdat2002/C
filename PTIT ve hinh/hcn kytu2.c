#include<stdio.h> 
int main(){
		int a,b,i,j;
		scanf("%d %d",&a,&b);
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++){
				if(j==0){
				if(i<b)
				printf("%c",i+65);
				else
				printf("%c",b+65-1);
			}
				else if(i==0)
				printf("%c",j+65);
				else if(i<b-j)
				printf("%c",i+j+65);
				else
				printf("%c",b-j+64);
				
			}
			printf("\n");
		}
			  return 0;
}
