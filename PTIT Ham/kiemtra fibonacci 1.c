#include<stdio.h>
int main(){
	long long int fb[100];
	fb[1]=fb[2]=1;
	for(int i=3;i<=92;i++){    //so fibonacci thu 92
		fb[i]=fb[i-1]+fb[i-2];
	}
	
	long long int n;
	int danhdau=0,i;
	scanf("%lli",&n);
	for(i=1;i<=92;i++){
		if(n==fb[i]){
			danhdau=1;
			break;
		}
		else continue;
	}
	if(danhdau==1) printf("1");
	else printf("0");
	return 0;
}
