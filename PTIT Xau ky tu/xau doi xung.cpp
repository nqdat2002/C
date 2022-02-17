#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	int n,i,j,a,b,sum,m,c;
	char M[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		a=strlen(M);
		b=0;
		for(j=0;j<strlen(M)/2;j++){
			if(M[j]==M[a-j-1])
			b++;
		}
		if(b==a/2-1)
		printf("YES\n");
		else if(a%2!=0&&b==a/2)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;

}