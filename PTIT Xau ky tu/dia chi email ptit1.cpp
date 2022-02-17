#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n,i,j,a,b,sum;
	char M[100000],N[13]="@ptit.edu.vn";
	gets(M);
	
	for(i=0;i<strlen(M);i++){
		if(M[i]>=65&&M[i]<=90)
		M[i]+=32;
	}
	printf("%c",M[0]);
	for(i=0;i<strlen(M);i++)
	{
	
		if(M[i]==' '&&M[i+1]!=' ')
		{
		printf("%c",M[i+1]);
		b=i;	
		}
		else
		continue;
	}
	for(i=b+2;i<strlen(M);i++){
		
		printf("%c",M[i]);
	}
	printf("%s",N);
	return 0;
}