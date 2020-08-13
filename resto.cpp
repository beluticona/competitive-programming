//Contest 287327
//Problem E

#include <iostream>

int main(){
	int n, m1, m2, k, res = 0;
	int pow = 0;
	scanf("%d%d%d", &n, &m1, &m2);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &k);
		if(k == 2){
			if(m2>0){
				m2--;
			} else res+=2;
		}else {
			if (m1 > 0) {
				m1--;
			} else if (m2 > 0) {
				m2--;
				pow++;
			} else if (pow > 0) {
				pow--;
			} else res++;
		}
	}
	printf("%d", res);
	return 0;
}