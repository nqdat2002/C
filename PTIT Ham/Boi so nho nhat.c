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
  	long long int n,m;
	scanf("%d",&t);
    while (t--) {
    	scanf("%lli %lli",&n,&m);
    	long long int temp=1;
    	long long int i;
    	for (i=n;i<=m;i++) {
    		temp=LCM(temp,i);
		}
		printf("%lli\n",temp);
	}
    return 0;
}
