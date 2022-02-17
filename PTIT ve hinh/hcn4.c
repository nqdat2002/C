#include<stdio.h> 
int main(){
		int a,b,i,j;
		scanf("%d %d",&a,&b);
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++){
				if(b>=a){
				if(j==0)
				printf("%d",b-i);
				else if(i==0)
				printf("%d",b-j);
				else if(i<b-j)
				printf("%d",b-i-j);
				else 
				printf("%d",i+j-b+1+1);
			}
				else
				{
					if(j==0)
				printf("%d",a-i);
				else if(i==0)
				printf("%d",a-j);
				else if(i<a-j)
				printf("%d",a-i-j);
				else 
				printf("%d",i+j-a+1+1);
				}
			}
			printf("\n");
		}
return 0;
}
