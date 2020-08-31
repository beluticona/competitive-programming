// Kick Start
// Round A 2020

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main(){
	ll t, i, n, b, k;
	scanf("%d", &t);
	for(int j = 0;j <t; j++){
		scanf("%lld%lld", &n, &b);
		vector<int> prices(1001,0);
		for(i = 0; i<n; i++){
			scanf("%lld", &k);
			prices[k]++;
		}
		i = 1;
		k = 0;
		while(i<= 1000){
			while(b-i>= 0 and prices[i]>=1){
				b-=i;
				prices[i]--;
				k++;
			}
			i++;
		}

		printf("Case #%d: %lld\n", j+1,k);
	}
	return 0;
}

