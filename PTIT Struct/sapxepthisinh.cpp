#include<stdio.h>
#include<string.h>
struct sxts{
	int ma;
	char M[1000],N[1000];
	float a,b,c;
};
int main(){
	int n,i,j,m;
	float d=100;
	float B[n];
	scanf("%d\n",&n);
	struct sxts A[n];
	for(i=0;i<n;i++)
	{
		A[i].ma=i+1;
		gets(A[i].M);gets(A[i].N);
		if(i==n-1)
		scanf("%f%f%f",&A[i].a,&A[i].b,&A[i].c);
		else
		scanf("%f%f%f\n",&A[i].a,&A[i].b,&A[i].c);	
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i].a+A[i].b+A[i].c<A[j].a+A[j].b+A[j].c){
		struct sxts s=A[i];
		A[i]=A[j];
		A[j]=s;
			}
		}		
		}
	for(i=0;i<n;i++){
		printf("%d %s %s %0.1f\n",A[i].ma,A[i].M,A[i].N,A[i].a+A[i].b+A[i].c);
	}
	return 0;
}