#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

	if(a%b==0){
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n; cin>>t;
	while(t--){
		cin>>n;
		int pairs = 2*min(3,n)-1;

		for(int i=2;i<=n;i++){

		}
		cout<<pairs<<"\n";
	}
	return 0;
};


