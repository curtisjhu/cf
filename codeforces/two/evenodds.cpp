#include <bits/stdc++.h>
using namespace std;

int main(){
	double n, k;
	cin>>n>>k;

	double numodd = ceil(n/2);

	if(k <= numodd){
		long long int res = 1+2*(k-1);
		cout<<res<<endl;
	}
	else {
		k -= numodd;
		long long int res = 2+2*(k-1);
		cout<<res<<endl;
	}

	return 0;
}
