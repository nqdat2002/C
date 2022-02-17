#include<stdio.h>
int main()	{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	long long n;
	scanf("%lld",&n);
	long long dao=0;
	long long m=n;
	while(m>0){
		dao = dao * 10 + m % 10;
		m /=10;
	} 
	if(dao==n){
		printf("YES\n");}
	else{printf("NO\n");
	}	
	}
}
#include<string.h>
int main(){
	int t,j;
	scanf("%d\n",&t);
	while(t--){           						//for(j=0;j<t;j++){
		char kt[1000];   
		int i, dem1=0, dem2=0;
		gets(kt);        						// nhap xau
		int n = strlen(kt); 					//chieu dai cua xau
		for(i=0 ; i<n/2 ; i++){
			if(kt[i] == kt[n-1-i]) dem2++; 							//dk1
		}
		if( dem2 == n/2 ) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}