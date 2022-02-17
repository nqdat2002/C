#include<stdio.h>
#include<math.h>
int snt(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
int tong(int x){
	int sum=0;
	while(x){
		sum=sum+x%10;
		x/=10;
	}
	return sum;
}
int main(){
	int n,a,i,j,dem=0;
	scanf("%d",&n);	
	for(i=1;i<n;i++){
		if(snt(i)&&tong(i)%5==0)
		{
			printf("%d ",i);
			dem++;
		}
		
	}
	printf("\n%d",dem);
	return 0;
}
