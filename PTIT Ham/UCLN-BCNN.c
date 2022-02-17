#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int m=a,n=b;
	int c;
		if(a==b){
			printf("%d\n%d",a,b);		}
		else{
while(a!=b){
	if(a>b)
	c=a-b;
	else
	c=b-a;
	
	a=b;
	b=c;
}
printf("%d\n",c);
printf("%lli",(long long int)m*n/c);
}
	return 0;
}
