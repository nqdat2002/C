#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,a,b,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		b=0,d=0;
	if(a%2!=0)
	printf("0\n");
	else{
	for(j=2;j<sqrt(2*a);j+=2)
	if(a%j==0)
	b++;
	
	int c=sqrt(2*a);
	if(c*c==2*a)
	printf("%d\n",2*b+1);
	else
	printf("%d\n",2*b);
	}
}
	return 0;
}