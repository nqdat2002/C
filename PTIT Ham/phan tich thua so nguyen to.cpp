#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	
	unsigned int n;
	unsigned i = 2;
	scanf("%d", &n);
	if(n == 1) {
		printf("1 = 2^0");
	} 
	else {
		printf("%d = ", n);
		int count = 0;
		while(n > 1) {
			if(n % i == 0) {
				count++;
				if(n == i) {
					printf("%d^%d", i, count);
				}
				n /= i;
			} 
			else {
				if(count > 0) {
					printf("%d^%d * ", i, count);
					count = 0;
				}
				i++;
			}
		}
	}
	printf("\n");
}
	return 0;
}