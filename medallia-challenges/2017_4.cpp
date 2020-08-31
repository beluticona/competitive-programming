// Medallia 2017 Ex 4

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<string> argentina = {"Buenos Aires", "Rosario" , "Viedma"};
vector<string> brazil = {"Rio de Janeiro", "Belo Horizonte", "Recife"};
vector<string> peru = {"Lima", "Ayacucho", "Cusco"};

int main(){
	int n;
	cin >> n; cin.ignore();
	vector<string> origins(n);
	vector<string> destines(n);
	vector<int> durations(n);
	for (int i = 0; i < n; ++i) {
		getline(cin, origins[i]);
	}
	for (int i = 0; i < n; ++i) {
		getline(cin, destines[i]);
	}
	for (int i = 0; i < n; ++i) {
		cin >> durations[i];
	}
	for (int j = 0; j < n; ++j) {
		if(origins[j] == destines[j]) cout << durations[j] << endl;
		else if( (count(argentina.begin(), argentina.end(), origins[j])>0 and
				count(argentina.begin(), argentina.end(), destines[j])>0) or
				(count(brazil.begin(), brazil.end(), origins[j])>0 and
				 count(brazil.begin(), brazil.end(), destines[j])>0) or
				(count(peru.begin(), peru.end(), origins[j])>0 and
				 count(peru.begin(), peru.end(), destines[j])>0)){
			if(durations[j]>60) cout << 10 + (durations[j]-60);
			else cout << 10 << endl;
		}else{
			if(durations[j]>600){
				cout << durations[j]*15 << endl;
			}else{
				cout << durations[j]*20 << endl;
			}
		}
	}
	return 0;
}

