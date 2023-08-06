#include <bits/stdc++.h>

using namespace std;
// Correct
// O(sqrt(N))
int main() {

	long long N; cin>>N;

	int counter = 0;

	// in case it is a really large prime
	for (long long i=2;i*i<=N;i++){
		// while loop for multiples. Ex: 2^3
		int c = 0; // exponent (mulitples)
		while(N%i==0) {
			N /= i;
			c++; // add a multiple
		}

		// how many 1 + 2 + 3 ... < exponent
		for(int idx = 1; c -idx >= 0; idx++) {
			c -= idx;
			counter++;
		}
	}

	// last resulting N will be a singular.
	if (N>1) counter++;

	cout<<counter<<endl;

	return 0;
}