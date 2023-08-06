#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;

	// prefix array is one longer
	// first index is just 0
	vector<long long> prefix(n+1);
	for (int i=0, k;i<n;i++) {
		cin>>k;
		prefix[i+1] = k + prefix[i];
	}

	int l, r;
	while(q--) {
		cin>>l>>r;
		cout<<prefix[r] - prefix[l]<<endl;
	}
	return 0;
}