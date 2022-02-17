#include<stdio.h>
int main(){
	long long int fb[100];
	fb[1]=fb[2]=1;
	for(int i=3;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lli\n",fb[n]);
	}
	return 0;
}
#include<stdio.h>
long long int dequyfibo(int n){
	if(n<=2) return 1;
	long long int f[100];
	f[1]=f[2]=1;
	int i=3;
	for(i=3;i<=n;i++){
		f[i]=f[i-2]+f[i-1];
	}
	return f[n];
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lli\n",dequyfibo(n));
	}
	return 0;
}
