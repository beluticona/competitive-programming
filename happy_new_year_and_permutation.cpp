//Contest 287327
//Problem B

#include <iostream>

typedef long long ll;

int main(){
	int n = 0;
	ll res = 0;
	ll m = 0;
	scanf("%d%d", &n,&m);

	//pre calculation of factorials
	ll factorials[n+1];
	factorials[0] = 1;
	for (ll i = 1; i < n+1; ++i) {
		factorials[i] = (factorials[i-1] * i) % m;
	}

	for (ll len = 1; len <= n; ++len) {
		// number of subseqs of size equal to len : (n-len+1)
		// number of permutations of segment of size len with a fix (min-max): factorials[len]
		// number of possible combinations with the rest of elements: n-len+1
		res += (n-len+1) * (factorials[len] * factorials[n-len+1] % m);
		res %= m;
	}
	//res = (res<0)? res + m:res;
	printf("%lld", res);

};


