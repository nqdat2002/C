#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char M[1000],N[1000],A[1000],B[1000],a,m,b;
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		gets(N);
		toupper(N);
		for(j=0;j<strlen(M);j++){
			a=0;
			for(m=j;m<j+strlen(N);m++){
				if(toupper(M[m])==toupper(N[m-j]))
				a++;
			}
			if(a==strlen(N)){
				for(m=j;m<strlen(M);m++){
					M[m]=M[m+strlen(N)];
				}
			}
		}
		printf("\nTest %d: ",i+1);
		for(j=0;j<strlen(M);j++){
			if(j==0){
				if(M[j]==' ')
				continue;
			}
			if(M[j]==' '&&M[j+1]==' ')
			continue;
			printf("%c",M[j]);
		}
		printf("\n");
	}
	
	return 0;
}