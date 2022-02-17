#include<stdio.h>
#include<string.h>
int main(){
	int t,j;
	scanf("%d\n",&t);
	while(t--){
	
		char kt[1000];   
		int i,dem1=0,dem2=0;
		gets(kt);        // nhap xau
		int n=strlen(kt); //chieu dai cua xau
		
		for(i=0;i<n;i++){
			if(kt[i]=='2'||kt[i]=='3'||kt[i]=='5'||kt[i]=='7')    //dk 2
				dem1++;
		}
		for(i=0;i<n/2;i++){
			if(kt[i]==kt[n-1-i]) dem2++; 							//dk1
		}
		
		if(dem1==n  && dem2==n/2) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
