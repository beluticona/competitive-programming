// Medallia 2015 ex 9

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	string key;
	cin >> key;
	unordered_map<char, int> map;
	for (int i = 0; i < key.length(); ++i) {
		if(map.count(key[i]) == 0){
			map[key[i]] = 1;
		}else map[key[i]]++;
	}
	bool already_an_odd = false;
	string result = "TRUE";
	for (const auto& elem: map) {
		if((elem.second % 2 == 1 and already_an_odd) ){
			result = "NO";
		} else if (elem.second % 2 == 1){
			already_an_odd = true;
		}
	}
	cout << result;
	return 0;

}
