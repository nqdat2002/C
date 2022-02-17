#include<stdio.h>
#include<string.h>
int main(){
	int t;	char S1[100][30],S2[4]="084";
	scanf("%d\n",&t);
	int k;
	for(k=0;k<t;k++)
		gets(S1[k]);
	for(k=0;k<t;k++)
	{
		int a,i,j,b=0;
		for(i=0;i<strlen(S1[k]);i++){
			a=0;
			for(j=i;j<i+strlen(S2);j++){
				if(S1[k][j]==S2[j-i])
				a++;
			}
			if(a==strlen(S2)){
				for(j=i;j<strlen(S1[k]);j++){
			S1[k][j]=S1[k][j+strlen(S2)];
		}
			b++;
			}
		}
		for(i=0;i<strlen(S1[k]);i++){
			if(i==0){
				if(S1[k][i]==' ')
				continue;
			}
			if(S1[k][i]==' '&&S1[k][i+1]==' ')
			continue;
			
			printf("%c",S1[k][i]);
		}
		printf("\n");
	}
	return 0;
}
