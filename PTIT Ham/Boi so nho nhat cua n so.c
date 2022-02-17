#include <stdio.h>
long long int GCD(long long int a, long long int b) {
   	long long int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long long int LCM(long long int a, long long int b) {
    return (a*b)/GCD(a,b);
}

int main () {
    int t;
  	long long int n;
	scanf("%d",&t);
    while (t--) {
    	scanf("%lli",&n);
    	long long int temp=1;
    	for (int i=1;i<=n;i++) {
    		temp=LCM(temp,i);
		}
		printf("%lli\n",temp);
	}
    return 0;
}
