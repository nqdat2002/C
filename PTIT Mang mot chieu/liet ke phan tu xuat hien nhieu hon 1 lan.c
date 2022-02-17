#include<stdio.h>
int main(){
	int n,i;
	int M[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	scanf("%d",&M[i]);	
	}
	int c=0;
	for(i=0;i<n;i++){
	int j;
	int d=1;
		for(j=i+1;j<n;j++){
			if(M[i]==M[j])
			d++;
			}
			int e=1;
			for(j=0;j<i;j++){
				if(M[j]==M[i])
				e++;
				}
				if(e>=2){
				continue;
				}
				if(d>=2)
				c++;
	}	
	printf("%d\n",c);		
	for(i=0;i<n;i++){
	int j;
	int dem=1;
		for(j=i+1;j<n;j++){
			if(M[i]==M[j])
			dem++;
			}
			int a=1;
			for(j=0;j<i;j++){
				if(M[j]==M[i])
				a++;
				}
				if(a>=2){
				continue;
				}
				if(dem>=2)
			printf("%d ",M[i]);
	}	
	return 0;
	}
