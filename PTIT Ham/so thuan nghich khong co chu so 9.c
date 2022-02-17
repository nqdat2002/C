#include<stdio.h>
#include<math.h>
int thuannghich(int x){
	int sum=0,n=x,a=0;
	while(x){
		sum=sum*10+x%10;
		if(x%10==9)
		a++;
		x/=10;
	}
	if(n==sum&&a==0)
	return 1;
	return 0;
}
int main(){
	int n,a,i,j,dem=0;
	scanf("%d",&n);	
	for(i=2;i<n;i++){
		if(thuannghich(i)){
		printf("%d ",i);
		dem++;
	}
	}
	printf("\n%d",dem);
	return 0;
}
