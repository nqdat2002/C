#include<stdio.h>
#include<math.h>
int main(){	
	int a,b,c,d,i;
	scanf("%d%d",&a,&b);
	if((int)sqrt(a)==(double)(sqrt(a))){
		c=sqrt(b);
		d=sqrt(a);
	}
	else{
		c=sqrt(b);
		d=sqrt(a)+1;
	}
	printf("%d\n",c-d+1);
	for(i=d;i<=c;i++){
		printf("%d\n",i*i);
	}
	return 0;
}