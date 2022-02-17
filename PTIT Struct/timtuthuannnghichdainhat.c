#include<stdio.h>
#include<string.h>
int thng(char*a){
	int i,c=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]==a[strlen(a)-1-i])
		c++;
		}
		if(c==strlen(a))
		return 1;
		return 0;
	}
int main(){
	int i=0,j,z,x;
	char a[10000][100],N[100],b[10000][100];
	while(scanf("%s",&N)!=EOF)
	strcpy(a[i++],N);
	int max=0;
	for(j=0;j<i;j++){
	if(strlen(a[j])>max&&thng(a[j]))
	max=strlen(a[j]);
	}
	int l=0;
	for(j=0;j<i;j++){
	if(strlen(a[j])==max&&thng(a[j]))
	strcpy(b[l++],a[j]);
	}
	for(j=0;j<l;j++){
				int c=0,f=0;
				for(z=0;z<l;z++){
					if(strcmp(b[z],b[j])==0)
					c++;
					}
						for(x=0;x<j;x++){
						if(strcmp(b[x],b[j])==0)
						f++;
						}
						if(f>=1)
						continue;
					printf("%s %d\n",b[j],c);
				}
	return 0;
	}
