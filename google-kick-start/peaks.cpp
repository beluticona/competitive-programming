// Google Kick Start
// Round B, 2020

#include <iostream>
#include <vector>

int main(){
	int t, i, n, j, res;
	scanf("%d", &t);
	for(i=0;i<t;i++){
		res = 0;
		scanf("%d", &n);
		std::vector<int> checks(n);
		for(j=0;j<n;j++){
			std::cin >> checks[j];
		}
		for(j=1; j<n-1; j++){
			if(checks[j-1]< checks[j] and checks[j] > checks[j+1] )
				res++;
		}
		printf("Case #%d: %d\n", i+1,res);
	}

}

