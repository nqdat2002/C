#include<stdio.h>
#include<string.h>

int main(){
	char M[1000],N[1000],A[100][100],B[100][100],Z[100][100];
	int s,f;
	scanf("%d\n",&s);
	for(f=0;f<s;f++){
	gets(M);
	gets(N);
	char*p,*q;
	const char*delim=" ";
	int i=0,j=0,z,m,v=0,t;
	for(p=strtok(M,delim);p!=NULL;p=strtok(NULL,delim)){
		strcpy(A[i++],p);
	}
	for(q=strtok(N,delim);q!=NULL;q=strtok(NULL,delim)){
		strcpy(B[j++],q);
	}
	for(m=0;m<i;m++){
		int c=0,d=0;
		for(z=0;z<j;z++){
			if(strcmp(A[m],B[z])==0)
			c++;
		}
		for(z=0;z<m;z++){
			if(strcmp(A[m],A[z])==0)
			d++;
		}
		if(d>=1)
		continue;
		if(c==0)
	{
		strcpy(Z[v],A[m]);
		v++;
	}
	}
	for(z=1;z<v;z++){
	for(m=1;m<v;m++){
	if(strcmp(Z[m-1],Z[m])>0){
	char x[100];
	strcpy(x,Z[m-1]);
	strcpy(Z[m-1],Z[m]);
	strcpy(Z[m],x);
	}
}

}
	for(m=0;m<v;m++){
		printf("%s ",Z[m]);
	}
	printf("\n");
}
	return 0;
}