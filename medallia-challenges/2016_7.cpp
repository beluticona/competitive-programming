// Medallia 2016 Ex 7

#include <iostream>
#include <tgmath.h>

using namespace std;

long long least_steps(long long k){
	if(k==0) return 0;
	if(k==1) return 1;
	if(k & (k-1) == 0){
		return log2(k)+1;
	}else{
		int pow_2 = floor(log2(k));
		return k-exp2(pow_2) + pow_2 + 1;
	}
}
int main(){
	int n;
	cin >> n ;
	long long k;
	for (int i = 0; i < n; ++i) {
		cin >> k;
		cout << least_steps(k) << endl;
	}
	return 0;
}

