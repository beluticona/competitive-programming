//Contest 287327
//Problem A
#include <iostream>

int main(){
	int tests, a, b, res, diff;
	scanf("%d", &tests);
	a = b = res = diff = 0;
	for (int j = 0; j < tests; ++j) {
		scanf("%d%d", &a, &b);
		diff = b-a;
		if(a == b) {
			res = 0;
		}else
			res = ((diff > 0 and diff % 2 == 1) or
			      (diff < 0 and diff % 2 == 0)) ? 1 : 2;
		printf("%d\n", res);
	}
	return 0;
}
