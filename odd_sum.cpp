//Contest 287327
//Problem I

#include <iostream>

int main(){
	int numTests, n, k, q;
	bool par;
	scanf("%d", &numTests);
	for (int i = 0; i < numTests; ++i) {
		par = false;
		k = q = n = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; ++j) {
			k = 0;
			scanf("%d", &k);
			if(k % 2 == 1) q++;
			if(k % 2 == 0) par = true;
		}
		if(q == 0 or (q % 2 == 0 and not par)){
			printf("%s", "NO\n");
		}else
			printf("%s", "YES\n");
	}
	return 0;
}
