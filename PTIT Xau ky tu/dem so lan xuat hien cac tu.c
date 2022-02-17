#include<stdio.h>
#include<string.h>

int main(){
	char M[1000],N[100][100];
	gets(M);
	char*p;
	int m,j,z,i=0;
	char A[100];
for(j=0;j<strlen(M);j++){
	if(M[j]>=65&&M[j]<=90)
	M[j]+=32;
}
	const char*delim=" ";
	for(p=strtok(M,delim);p!=NULL;p=strtok(NULL,delim)){
		strcpy(N[i++],p);
	}

for(j=0;j<i;j++){
	int dem=0,a=0;
			for(m=0;m<i;m++)
			{
				if(strcmp(N[m],N[j])==0)
				dem++;
				}
				for(m=0;m<j;m++){
					if(strcmp(N[m],N[j])==0)
					a++;
				}
				if(a>=1)
				continue;
				printf("%s %d\n",N[j],dem);
			}
return 0;
}
