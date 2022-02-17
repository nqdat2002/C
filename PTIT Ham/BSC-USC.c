#include<stdio.h>
#include<stdbool.h>
int main(){
	int a,b,i;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		int m=a,n=b;
		int c;
		if(a==b){
			printf("%d %d",a,b);
		}
		else
		{
			while(a!=b)
			{
				if(a>b) 
				c=a-b;
				else 
				c=b-a;
				a=b;
				b=c;
			}
		printf("%lli ",(long long int)m*n/c);
		printf("%d\n",c);	
		}
		
	}
	return 0;
}
