#include<stdio.h>
#include<string.h>
struct sx{
	int ma;
	char M[100],N[100];
	float a,b;
};
int main(){
	int n,i,j,m;
	float d=100;
	float B[n];
	scanf("%d\n",&n);
	struct sx A[n];
	for(i=0;i<n;i++)
	{
		A[i].ma=i+1;
		gets(A[i].M);gets(A[i].N);
		if(i==n-1)
		scanf("%f%f",&A[i].a,&A[i].b);
		else
		scanf("%f%f\n",&A[i].a,&A[i].b);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(-A[i].a+A[i].b<-A[j].a+A[j].b){
		struct sx s=A[i];
		A[i]=A[j];
		A[j]=s;
			}	
		}
		}
	for(i=0;i<n;i++){
		printf("%d %s %s %0.2f\n",A[i].ma,A[i].M,A[i].N,-A[i].a+A[i].b);
	}	
	return 0;
}
