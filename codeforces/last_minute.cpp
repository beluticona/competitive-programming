//Contest 1466 Good Bye 2020
// Problem B
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
	int t, n, elem;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		unordered_map<int, int> notes;
		for (int j = 0; j < n; ++j) {
			cin >> elem;
			if(notes.find(elem) == notes.end())
				notes[elem] = 1;
			else if (notes.find(elem+1) == notes.end()){
				notes[elem+1] = 1;
			}else
				notes[elem+1]++;
		}
		cout << notes.size() << endl;
	}

	return 0;
}
