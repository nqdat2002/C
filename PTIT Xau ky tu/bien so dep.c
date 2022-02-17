#include <stdio.h>
#include<string.h>
int main() {
	int n,i;
	char A[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(A);
		if(A[6]==A[7]&&A[6]==A[8]&&A[6]==A[10]&&A[6]==A[11])
		printf("YES\n");
		else if((A[6]==A[7]&&A[6]==A[8])&&A[10]==A[11])
		printf("YES\n");
		else if((A[6]==54||A[6]==56)&&(A[7]==54||A[7]==56)&&(A[8]==54||A[8]==56)&&(A[10]==54||A[10]==56)&&(A[11]==54||A[11]==56))
		printf("YES\n");
		else if(A[6]<A[7]&&A[7]<A[8]&&A[8]<A[10]&&A[10]<A[11])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
