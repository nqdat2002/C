#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	int n,i,A[1000],B[1000],C[1000],j;
	char X[100][200];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
    {
    	gets(X[i]);
	}	
	for(i=0;i<n;i++)
    {
        A[i]=0,B[i]=0,C[i]=0;
    	for(j=0;j<strlen(X[i]);j++)
    	{
		    if(X[i][strlen(X[i])-1]==' ')
            	C[i]=1;
	    	if(X[i][j]==' ')
	        	A[i]++;
	    	if(X[i][j]==' '&&X[i][j+1]==' ')
	        	B[i]++;
    	}
    	printf("%d\n",A[i]+1-B[i]-C[i]);
    }
	return 0;

}
