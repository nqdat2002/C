#include<stdio.h>
main(){
	int test,n;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		printf("%ld\n",(long)n*(n+1)/2);
	}
}