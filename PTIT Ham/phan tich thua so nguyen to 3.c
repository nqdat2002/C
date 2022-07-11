#include <stdio.h>
#include <math.h>
typedef long long ll;

int main(){
	int t; scanf("%d", &t);
	for(int id = 1; id <= t; ++id){
		ll n; scanf("%lld", &n);
		printf("Test %d: ",id);
		int cnt = 0;
		ll i = 2;
		while(n > 1){
			if(n % i == 0){
				cnt++;
				if(n == i)
					printf("%d(%d)", i, cnt);
				n /= i;
			}
			else{
				if(cnt > 0){
					printf("%d(%d) ", i, cnt);
					cnt = 0;
				}
				i++;
			}
		}
		printf("\n");
	}
}
