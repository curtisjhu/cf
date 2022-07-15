#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
	while(n){
		int digit = n % 10;
		n /= 10;
		if(digit != 4 || digit != 7) {
			return false;
		}
	}
	return true;
}

		

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	if (isLucky(n)) {
		cout<<"YES"<<endl;
		return 0;
	}

	int a[9] = {4, 7, 47, 74, 447, 477, 474, 747, 774};
	for(int i=0;i<9;i++){
		if(n%a[i]==0){
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;

	return 0;
};


