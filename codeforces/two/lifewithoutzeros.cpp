#include <bits/stdc++.h>
using namespace std;

int removeZeros(int n){
	int tens = 1, ans=0;
	while(n){
		int digit = n % 10;
		n /= 10;
		if (digit){
			ans += digit * tens;
			tens *= 10;
		}
	}
	return ans;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin>>a>>b;
	
	int c = removeZeros(a+b);
	a = removeZeros(a);
	b = removeZeros(b);

	if (a+b == c) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}

	return 0;
};


