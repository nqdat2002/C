#include<stdio.h>
#include<string.h>
int main(){
	char M[1000],N[100][100];
	gets(M);
	char*p;
	int m,j,z,i=0;
	const char*delim=" ";
	for(p=strtok(M,delim);p!=NULL;p=strtok(NULL,delim))
	{
		strcpy(N[i++],p);
	}
	for(j=0;j<i;j++)
	{
		int dem=0;
		for(m=0;m<j;m++)
		{
			if(strcmp(N[m],N[j])==0)
			dem++;
				
		}
		if(dem==0)
		printf("%s ",N[j]);
		else
		continue;
	}
return 0;
}
