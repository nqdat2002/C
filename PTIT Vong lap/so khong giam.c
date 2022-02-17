#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	long long int M[n];
	long long int N[18];
	for(i=0;i<n;i++){
		scanf("%lli",&M[i]);
	}
	for(i=0;i<n;i++){
		int j=0;
		long long int dao1=0;
		while(M[i]){
			N[j]=M[i]%10;
			dao1=dao1*10+M[i]%10;
			M[i]=M[i]/10;
			j++;}
		long long int dao2=0;	
		while(dao1){
			dao2=dao2*10+dao1%10;
			dao1=dao1/10;	
		}
		int k;
		for(k=0;k<j-1;k++){
			int l;
			for(l=k+1;l<j;l++){
				if(N[k]>N[l]){
					int t=N[k];
					N[k]=N[l];
					N[l]=t;
				}
			}
		}
		long long int dao=0;
		for(k=0;k<j;k++){
			dao=dao*10+N[k];}
		if (dao==dao2)
		printf("YES\n");
		else
		printf("NO\n")	;
			
		}	
	return 0;
}
