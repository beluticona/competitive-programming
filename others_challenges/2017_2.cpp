// Medallia 2017 Ex 2

#include <iostream>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	string num = to_string(n);
	i = 1;
	if(num[0] == num[3] and num[1] == num[2]) cout << 0;
	else{
		while(i*n<=9999 and n < 5000){
			i++;
		}
		cout << i-1;
	}
	return 0;
}

