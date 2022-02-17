#include<stdio.h>
#include<math.h>
void doivitr(int n){
	int a[100];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n=n/10;
		i++;
	}
	if(a[0]!=0)
	printf("%d",a[0]);
	int j;
	for(j=i-2;j>=1;j--)
	printf("%d",a[j]);
	printf("%d",a[i-1]);
}
int main(){
	int n;
	scanf("%d",&n);
	doivitr(n);
	return 0;
}