#include<stdio.h>
int main(){
	int n,i,j,a,b,c,d,M[100],sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b);
		a=2;d=0;
		while(a<=b){
			if(b%a==0){
				M[d]=a;
				d++;
				b=b/a;
			}
			else {
				a++;
			}}
			sum=M[0];c=M[0];
			for(j=0;j<d;j++){
				if(M[j]!=sum){
				sum=M[j];
				c=c*sum;}
			}
			printf("%d\n",c);
			}
		
	return 0;
	}
