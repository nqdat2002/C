#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n,i,j,m;
	char M[1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		while(M[0]==' '){
			for(m=0;m<strlen(M);m++){
				M[m]=M[m+1];
			}
		}	
		char*N;
		N=strchr(M,' ');
	for(j=0;j<strlen(N);j++){
		if(j==0){
			if(N[j]==' ')
			continue;
		}
			if(N[j]>='A'&&N[j]<='Z')
			N[j]=N[j]+32;
			
			if(N[0]==' '){
				if(N[j]!=' '&&N[j-1]==' '&&j!=0)
				N[j]=N[j]-32;
			}
			else if(N[j]>='a'&&N[j]<='z')
			N[0]=N[0]-32;
			
	if(N[j]!=' '&&N[j-1]==' '&&j!=0&&N[j]>='a'&&N[j]<='z')
				N[j]=N[j]-32;
			if(N[j]==' '&&N[j-1]==' '&&j!=0)
			continue;
			printf("%c",N[j]);
		}
		printf(", ");
		for(j=0;M[j]!=' ';j++){
			printf("%c",toupper(M[j]));
		}
		printf("\n");
	}
	
	return 0;
}
