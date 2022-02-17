#include<stdio.h>
#include<math.h>
	int n,b;
	int dg;
int main(){
	int i,t;
	scanf("%d",&t);
	while(t--){	
		scanf("%d",&n);
		b=n;
		while(n>0){
		dg=n%10;
		n/=10;}	

				
	if(dg==(b%10)) printf("YES\n");
	else printf("NO\n");}
	return 0;
}