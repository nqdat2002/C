#include <stdio.h>
#include<string.h>
int main() {
	int n,i,j,a,b,sum,m;
	char M[100000],N[11]="0123456789";
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		a=0,b=0;
		for(m=0;m<10;m++){
	
		for(j=0;j<strlen(M);j++){
			if(M[j]<48||M[j]>57)
			b++;
			if(N[m]==M[j]){
	
			a++;
		break;	
		}
			
		}
	}
		if(b!=0||M[0]==48)
		printf("INVALID\n");
		else if(a==10&&a>=9)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;

}