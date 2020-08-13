//Contest 287327
//Problem E

#include <iostream>
#include <vector>

int main(){
	int n;
	scanf("%d", &n);
	if(n==1)
		printf("1 0");
	else{
		std::vector<int> chocos(n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &chocos[i]);
		}
		int i = 0, j = n-1, isum = chocos[i],  jsum = chocos[j];
		while(i<j-1){
			if(isum>jsum){
				j--;
				jsum+=chocos[j];
			}else if(isum<jsum){
				i++;
				isum+=chocos[i];
			} else{
				i++;
				j--;
				if(i == j){
					j++;
				}else{
					isum+=chocos[i];
					jsum+=chocos[j];
				}
			}
		}
		printf("%d %d", i+1, chocos.size()-j);
	}

	return 0;
}
