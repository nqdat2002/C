#include<stdio.h>
#include<math.h>
int snt(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	if(x%i==0||i==1)
	return 0;
	return 1;
}
int tong(int n){
	int a=0,sum=0,b=0;
	while(n){
		int i=n%10;
		b++;
		if(snt(i)&&i>=2)
		a++;
		sum=sum+i;
		n/=10;
	}
	if(a==b&&snt(sum))
	return 1;
	return 0;
}
int main(){
	int n,i,a,b,dem,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		dem=0;
		for(j=a;j<=b;j++){
			if(tong(j)&&snt(j))
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}
