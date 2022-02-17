#include<stdio.h>
int main(){
	long long int fb[100];
	fb[0]=0;fb[1]=1;
	for(int i=2;i<=92;i++){    					//so fibonacci thu 92
		fb[i] = fb[i-1]+fb[i-2];         // so sau = 2 so truoc + lai
	}
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		int danhdau=0,i;
		scanf("%lli",&n);
		for(i=0;i<=92;i++){
			if(n == fb[i]){
				danhdau=1;
				break;
			}
			else continue;
		}
		if(danhdau==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
