#include <stdio.h>
int kt (long long int n) {
	int a[20],dem=0;
	while (n>0) {
		a[dem++]=n%10;
		n/=10;
	}
	for (int i=1;i<dem-1;i++) 
	if(a[i]!=a[dem-1-i]) return 1;
	if (a[0]==2*a[dem-1]) return 0;
	if (2*a[0]==a[dem-1]) return 0;
	return 1;
} 
int main () {
	int n; scanf("%d",&n);
	while (n-- ) {
		long long int a;
		scanf("%lld",&a);
		if(kt(a)==0) printf("YES\n"); 
		else printf("NO\n");
	}
}