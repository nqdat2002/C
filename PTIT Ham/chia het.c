#include<stdio.h>
#include<stdbool.h>
int gt(int n){
	int j=0,i;
for(i=2;i<=n;i+=2){
	int a=i;
while(a%2==0){
	j++;
	a/=2;
}
}
return j;
}
int main(){
	int n,i,a,b,c,d;
		scanf("%d%d",&a,&b);
		c=gt(a);
		if(c>=b)
		printf("Yes\n");
		else
		printf("No\n");
	
	}
