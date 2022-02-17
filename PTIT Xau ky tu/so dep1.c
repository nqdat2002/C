#include <stdio.h>
#include<string.h>
int main() {
	int n,i,j,a,b;
	char M[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
{
	a=0,b=0;
	gets(M);
	int d=strlen(M);
	for(j=0;j<strlen(M);j++){
		if(M[j]%2==0)
		a++;
	}
	for(j=0;j<strlen(M)/2;j++){
		if(M[j]==M[d-j-1])
		b++;
	}
	if(a==d&&b==a/2)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;

}
