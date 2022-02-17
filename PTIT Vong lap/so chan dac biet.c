#include<stdio.h>
#include<stdbool.h>
bool ktra(long long int n){
	int a=0,b=0;
	while(n){
		int i=n%10;
		n/=10;
		if(i%2==0)
		a++;
		b++;
	}
	if(a==b)
	return true;
	return false;
	}
int main(){
	int n,i;
	long long int a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lli",&a);
		if(ktra(a)&&a%2==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	}
    #include<stdio.h>
#include<string.h>
int main(){
	int t,j;
	scanf("%d\n",&t);
	while(t--){           						
		char kt[1000];   
		int i, dem1=0, dem2=0;
		gets(kt);        						
		int n = strlen(kt); 
		for(i=0;i<n;i++){
				if(kt[i]%2==0) dem1++;
		}	
		if(dem1==n) printf("YES\n");
		else printf("NO\n");							
	}
	return 0;
}
