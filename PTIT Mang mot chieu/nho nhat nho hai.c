#include<stdio.h>
int main(){
	int n,i;
	int M[100]; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&M[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int j;
		for(j=i+1;j<n;j++){
			if(M[i]>M[j]){
			
			int t=M[i];
			M[i]=M[j];
			M[j]=t;
		}
		}
	}
	printf("%d ",M[0]);
	for(i=1;i<n;i++){
		if(M[i]>M[0]){

			printf("%d",M[i]);
			break;
		}
	}
}
