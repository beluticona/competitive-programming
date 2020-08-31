// KICK START
// ROUND C, 2020
// A

#include <iostream>
#include <vector>

int main(){
	int test, i,j, ans, n, k, m;
	scanf("%d", &test);
	for(i=0; i<test;i++){
		ans = 0;
		scanf("%d%d", &n,&k);
		std::vector<int> nums(n);
		for (j = 0; j < n ; ++j) {
			std::cin >> nums[j];
		}
		j = 0;
		while(j < n-k+1){
			while(j < n-k+1 and nums[j] != k) {
				j++;
			}
			m = 1;
			while(nums[j]==nums[j+1]+1 and j < n-1 ){
				m++;
				j++;
			}
			if(m == k) {
				ans++;
			}
			j++;
		}
		printf("Case #%d: %d\n", i+1, ans);
	}

}