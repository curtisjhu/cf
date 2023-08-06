#include <bits/stdc++.h>

using namespace std;

set<int> factors_slow(int n) {
	set<int> divisors;

	// slow O(N/2)
	for (int i=1;i*2<=n;i++) {
		if (n%i == 0) {
			divisors.insert(i);
		}
	}

	divisors.insert(n);
}

// O(sqrt(n))

int num_factors(int n) {
	int sum =0;
	for (int i=0;i*i<n;i++) {
		if (n%i==0) {
			// always in pairs, unless its a perfect square.
			sum+= i*i == n ? 1 : 2;
		}
	}

	return sum;
}


// O(log(n))

// I don't understand this.


int main() {
	int t; cin>>t;

	while(t--) {
		int n; cin>>n;

		cout<<num_factors(n)<<endl;
	}
	return 0;
}