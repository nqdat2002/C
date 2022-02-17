#include <stdio.h>
#include<string.h>
int main() {
	int n,i,j,a,b,sum,m,c;
	char M[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		a=0,b=0,c=0;
		for(m=0;m<strlen(M);m++){
	if(M[m]%2==0)
	a++;
	else{
		b++;
	}
			if(M[m]<48||M[m]>57)
			c++;
		}
	
		if(c!=0||M[0]==48)
		printf("INVALID\n");
		else if((a>b&&strlen(M)%2==0)||(a<b&&strlen(M)%2!=0))
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;

}
