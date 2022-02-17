#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int test,i,n,j,m;
	char X[1000][100], t[100];
	scanf("%d",&test);
	for(i=0;i<test;i++){
		scanf("%d\n",&n);
		for(j=0;j<n;j++)
			scanf("%s",&X[j]);
		for(j=0;j<n-1;j++){
			for(m=j+1;m<n;m++){
				char y[100]="",z[100]="";
				strcat(y,X[j]);
				strcat(y,X[m]);
				strcat(z,X[m]);
				strcat(z,X[j]);
				if(strcmp(y,z)>0)
				{
					strcpy(t, X[j]);
					strcpy(X[j], X[m]);
					strcpy(X[m], t);
				}
			}
		}
		char u[1000]="";
		for(j=0;j<n;j++)
			strcat(u,X[j]);
		printf("%s\n",u);
	}
	return 0;
}
