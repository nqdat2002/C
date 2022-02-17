#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a;
		scanf("%ld",&a);
		double s=(double)1/a;
		printf("%.15lf\n",s);
	}
	return(0);
}