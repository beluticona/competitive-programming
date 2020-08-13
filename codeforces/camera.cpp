// Contest 287327
// Problem J

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
	ll n, i, d, a, b, x, y;
	scanf("%lld %lld\n%lld %lld", &n, &d, &a, &b);
	vector<pair<ll, ll> > clients(n);
	for (i = 0; i < n; ++i) {
		scanf("%lld %lld", &x,&y);
		clients[i] = make_pair(x*a + y*b, i+1);
	}
	sort(clients.begin(), clients.end());
	i = a = 0;
	while (d-clients[i].first >=0 and i<n){
		a++;
		d-=clients[i].first;
		i++;
	}
	printf("%lld\n", a);
	for (b = 0; b < i; ++b) {
		printf("%lld ", clients[b].second);
	}


}