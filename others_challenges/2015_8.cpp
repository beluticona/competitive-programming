// Medallia 2015 ex 8

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, j, i;
	cin >> n;
	vector<int > numbers(n);
	for (i = 0; i < n; ++i) {
		cin >> numbers[i];
	}
	sort(numbers.begin(), numbers.end());
	
	vector< pair<int, int>> consecutive_diff(n - 1);
	for (int k = 0; k < n-1; ++k) {
		consecutive_diff[k] = make_pair(abs(numbers[k + 1] - numbers[k]), k);
	}
	sort(consecutive_diff.begin(), consecutive_diff.end());
	int min_diff = consecutive_diff[0].first;
	j = 0;
	while (consecutive_diff[j].first == min_diff and j < n-1){
		i = numbers[consecutive_diff[j].second];
		cout << "(" << i << "," << i+ consecutive_diff[j].first << ")" << endl;
		j++;
	}
	
	

}
