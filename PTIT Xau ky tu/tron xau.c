#include<stdio.h>
#include<string.h>

int main(){
	int i,dem;
	char S1[1000],S2[1090],S[1000];
	do{
		int n;
		dem=0;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		scanf("\n");
		gets(S1);
		gets(S2);
		gets(S);
		
		while(1){
			int m=0,n=0;
			dem++;
			char M[1000]="";
			for(i=0;i<strlen(S);i++){
				if(i%2==0){
					M[i]=S2[m];
					m++;
				}else{
					M[i]=S1[n];
					n++;
				}
		}
		M[strlen(S)]='\0';
	
			if(dem>50)
			{
				printf("-1\n");
				break;
			}
			else if(strcmp(M,S)==0)
			{
				printf("%d\n",dem);
				break;
			}
			for(i=0;i<strlen(S1);i++){
				S1[i]=M[i];
				S2[i]=M[i+strlen(S1)];
			}
			S1[n]='\0';
			S2[n]='\0';
		}
		}while(1);
	return 0;
	}
