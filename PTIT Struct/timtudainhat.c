#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char M[1000];
	char a[100][100],b[100][100];
	int i=0,j,k=0,x,y,c,d;
		while (scanf("%s",&M)!=EOF)
	strcpy(a[i++],M);
	int max=0;
	for(j=0;j<i;j++)
		if(strlen(a[j])>max)
			max=strlen(a[j]);	
	for(j=0;j<i;j++)
		if(strlen(a[j])==max)		
			strcpy(b[k++],a[j]);					
	for(j=0;j<k;j++){
	 	c=0,d=0;
		for(y=0;y<k;y++)
			if(strcmp(b[y],b[j])==0)
				c++;				
		for(x=0;x<j;x++)
			if(strcmp(b[x],b[j])==0)
				d++;					
		if(d>=1)
			continue;
		printf("%s %d %d\n",b[j],max,c);
	}
	return 0;
}
