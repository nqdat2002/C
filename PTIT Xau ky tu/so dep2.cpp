#include <stdio.h>
#include<string.h>
int main() {
	int n,i,j,a,b,sum;
	char M[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
{
	a=0,b=0;
	gets(M);
	int d=strlen(M);
	sum=0;
	for(j=0;j<strlen(M);j++){
		sum=sum+M[j]; 
		
	}
	for(j=0;j<strlen(M)/2;j++){
		if(M[j]==M[d-j-1])
		b++;
		
	}
	if((sum-48*d)%10==0&&b==d/2&&M[0]==56&&M[d-1]==56)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;

}