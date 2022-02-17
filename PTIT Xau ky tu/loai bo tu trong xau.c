#include<stdio.h>
#include<string.h>
int main(){
	char S1[1000],S2[1000],a,i,j,b=0;
	gets(S1);
	gets(S2);
	
	for(i=0;i<strlen(S1);i++){
		a=0;
		for(j=i;j<i+strlen(S2);j++){
			if(S1[j]==S2[j-i])
			a++;
		}
		if(a==strlen(S2)){
			for(j=i;j<strlen(S1);j++){
		S1[j]=S1[j+strlen(S2)];
	}
		b++;
		}
	}
	for(i=0;i<strlen(S1);i++){
		if(i==0){
			if(S1[i]==' ')
			continue;
		}
		if(S1[i]==' '&&S1[i+1]==' ')
		continue;
		
		printf("%c",S1[i]);
	}
	return 0;
}
