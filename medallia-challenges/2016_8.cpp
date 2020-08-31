// Medallia 2016 Ex 8

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool all_equal(vector<int > &v){
	int k = v[0];
	int i = 1;
	while(i < v.size() and v[i] == k){
		i++;
	}
	return i == v.size();
}
int main(){
	int n, ans;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
	}
	ans = 0;
	while(!all_equal(numbers)){
		vector<int>::iterator max = max_element(numbers.begin(),numbers.end());
		for (vector<int>::iterator i = numbers.begin(); i != numbers.end() ; i++) {
			if(i != max) {
				*i = *i +1;
			}
		}
		ans++;
	}
	cout << ans;
	return 0;
}

