#include <stdio.h>
#include <math.h>
main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		float a=sqrt(n);
		if(a==(int)a)  printf("YES\n");
		else printf("NO\n");
	}
}
