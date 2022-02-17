#include<stdio.h>
int tinhtong(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
		}
	return sum;
	}
int p(int n){
	int j=2,sum=0;
	while(j<=n){
		if(n%j==0){
			sum+=tinhtong(j);
			n/=j;
			
			}
			else
			j++;
		
		}
	return sum;
	}

int main(){
	int n;
	scanf("%d",&n);
	if(tinhtong(n)==p(n))
	printf("YES");
	else
	printf("NO");
	
	
	return 0;
	}