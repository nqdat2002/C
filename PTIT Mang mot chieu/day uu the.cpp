#include <stdio.h>
#include <string.h>
int main () 
{
	int n,i; 
	scanf("%d",&n);
	while (n--)
	{
		char m[99999]={0};
		scanf(" %[^\n]s",m);
		m[strlen(m)]=32;	
		int b=0,c=0;	
	   	for (i=0;i<strlen(m);i++)
		{ 
		    if (m[i]!=32 && m[i+1]==32) 
				{if (m[i]%2==0) 
				c++;b++; }
		}
	    if ( b%2==0 && b-c<c)
		{
			printf("YES\n");
			continue;
		}
	   	if ( b%2!=0 && b-c>c) 
		{
			printf("YES\n");
			continue;
		}
    printf("NO\n");
	}
	return 0;
}