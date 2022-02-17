#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,i,j,m;
	char M[10000],A[100][100],N[10000],B[100][100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		int a=0;
		char*p;
		const char*d=" ";
		for(p=strtok(M,d);p!=NULL;p=strtok(NULL,d)){
		strcpy(A[a++],p);
	}
	for(m=0;m<a;m++)
	for(j=0;j<strlen(A[m]);j++){
		if(A[m][j]>=65&&A[m][j]<=90)
		A[m][j]+=32;
	}
		strcpy(N,A[a-1]);
		for(j=0;j<a-1;j++){
			strncat(N,A[j],1);
		}
		strcpy(B[i],N);
	
	}
	for(i=0;i<n;i++){
		int dem=0,b=0;
		for(j=0;j<=i;j++)
		{
			if(strcmp(B[j],B[i])==0)
			b++;
			}
			if(b==1)
			dem=0;
	for(j=0;j<=i;j++){
		if(strcmp(B[j],B[i])==0){
		dem++;
	}
	}
	printf("%s",B[i]);
	if(dem!=1)
	printf("%d@ptit.edu.vn\n",dem);
	else
	printf("@ptit.edu.vn\n");

	}
	
	
	return 0;
}