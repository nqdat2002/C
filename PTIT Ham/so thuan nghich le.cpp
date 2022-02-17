#include<stdio.h>
#include<stdbool.h>
bool ktcl(long long n){
	if(n%2!=0) return true;
	return false;
}
bool tach(long long n){
	while(n){
		if(ktcl(n%10))
		return true;
		n/=10;
	}
	return false;
}
bool tinhtong(long long n){
	long long a;
	long long s=0;
	while(n){
		a=n%10;
		n/=10;
		s=s+a;
	}
	if(ktcl(s)) return true;
	return false;
}
int main()	{
	int a,i;
	scanf("%d",&a);
	while(a--)
	{
	long long n;
	scanf("%lld",&n);
	long long dao=0;
	long long m=n;
	while(m>0){
		dao = dao * 10 + m % 10;
		m /=10;
	} 
	if(dao==n&&(tinhtong(n))&&tach(n)){
		printf("YES\n");}
	else 
	printf("NO\n");
		
	}
	return 0;
}