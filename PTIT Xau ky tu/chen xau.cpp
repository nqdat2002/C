#include <stdio.h>
#include<string.h>
int main() {
	int n,i,j,a,b,sum;
	char M[100000],N[1000];
	gets(M);
	gets(N);
	scanf("%d",&b);
	int c=strlen(N);
	for(i=0;i<strlen(M)+strlen(N);i++){
		if(i<b-1)
		printf("%c",M[i]);
		else if(i<b+c-1)
		printf("%c",N[i-b+1]);
		else
		printf("%c",M[i-c]);
	}
	return 0;

}