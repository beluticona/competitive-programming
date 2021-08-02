// Medallia 2016 Ex 4
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	string word, phrase, token;
	cin >> word;
	sort(word.begin(), word.end());
	int n, k;
	cin >> n; cin.ignore();
	for (int i = 0; i < n; ++i) {
		getline(cin,phrase);
		istringstream partition(phrase);
		k = 0;
		while(partition >> token){
			sort(token.begin(), token.end());
			if (token == word) k++;
		}
		cout << k << endl;
	}
	return 0;
}

