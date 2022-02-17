#include<stdio.h>
int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		int n,a;
		scanf("%d",&n);
		for(a=2;n>1;)	{if (n%a==0){printf("%d ",a);n=n/a;}
		else{a++;
		}
		
		} printf("\n");
		}		
	}