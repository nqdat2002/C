#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9 + 7;
long long int comb(int n,int k){
	long long int C[1005][1005],i,j;
	C[0][0] = 1;
	for(i=1;i<=1000;i++){
		C[i][0] = 1;
		C[i][i] = 1;
		for(j=1;j<i;j++){
			C[i][j] = C[i-1][j-1] + C[i-1][j];
			C[i][j] = C[i][j] % mod;
		}
	}
	return C[n][k] % mod;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,r;
		cin >> n >> r;
		cout << comb(n, r) << endl;
	}
    return 0;	
}
