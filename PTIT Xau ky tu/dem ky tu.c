#include<stdio.h>
#include<string.h>
int main()
{
	int i,dem1=0,dem2=0,dem3=0,dem=0;
	char s[100];
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9') dem1++;
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') dem2++;
		dem3++;
		dem=dem3-dem2-dem1;
	}	
	printf("%d %d %d",dem2,dem1,dem);
	return 0;
}
