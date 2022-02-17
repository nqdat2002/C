#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool thuannghich(int n) {
	int m = n;
	int sum = 0;
	while (n != 0) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == m) {
		return true;
	}
	else return false;
}
bool nguyento(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t,i,c; 
	
	scanf("%d",&t);
	while (t--) {
		int a, b;
		
		scanf("%d %d",&a,&b);
		c=0;
		for (i = a; i <= b; i++) {
			if (thuannghich(i) == true && nguyento(i) == true) {
				printf("%d ",i);
				c++;
				if(c%10==0)
				printf("\n");
			}
		}printf("\n\n");
	}
	return 0;
}
