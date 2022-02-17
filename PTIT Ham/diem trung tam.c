#include<stdio.h>
#include<stdbool.h>
int main(){
	int t,i,X[20000],a,b,e=0,f=0,c=0;
	scanf("%d",&t);
	for(i=0;i<t-1;i++){
		scanf("%d%d",&a,&b);
		if(a==e||a==f||b==e||b==f)
		c++;
		e=a,f=b;
	}
if(c==t-2)
printf("Yes");
else
printf("No");
	
	}
