#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;

	k++;
	int temp = k;
	while(k){
		printf("%d ", k);
		k--;
	}

	for(int i = 1+temp;i<=n;i++){
		printf("%d ", i);
	}
		
	return 0;
}
