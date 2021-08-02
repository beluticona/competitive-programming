// Medallia Ex 6

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> partial_sum(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> partial_sum[i];
	}
	for (int j = 1; j < n; ++j) {
		partial_sum[j] += partial_sum[j - 1];
	}
	cout << abs(*min_element(partial_sum.begin(), partial_sum.end())) +1;
}

