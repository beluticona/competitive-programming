//Contest 1466 Good Bye 2020
// Problem B

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
 
using namespace std;
 

double Area(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
{
	double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
	return (dArea > 0.0) ? dArea : -dArea;
}
 
int count_diff_areas(vector<int>& trees){
	unordered_set<float> areas;
	for (int k = 0; k < trees.size()-1; ++k) {
		int i = k+1;
		while(i < trees.size()){
			areas.insert(Area(0,1,trees[k],0,trees[i],0));
			i++;
		}
	}
	return areas.size();
}
 
 
int main() {
	int t, n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		vector<int> trees(n);
		for (int j = 0; j < n; ++j) {
			cin >> trees[j];
		}
		cout << count_diff_areas(trees) << endl;
	}
 
	return 0;
}
