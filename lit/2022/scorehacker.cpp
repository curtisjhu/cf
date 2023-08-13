#include <bits/stdc++.h>

using namespace std;


// passes 1/10
int main() {
	// sum stays the same and score > -1
	// changes <= K

	// take k and distribute k
	// what if K is so large

	int n;
	long long k; // 10^18

	cin>>n>>k;

	int a;
	vector<int> v;
	for (int i=0; i<n; i++) {
		cin>>a;
		v.push_back(a);
	}

	int median = ((n+1)/2) -1; // -1 for indexing.

	long long tot = 0;
	for (int i = 0; i < median; i++) {
		tot += v[i];
	}

	// amount to distribute
	tot = min(k, tot);

	// a little weird and overcomplicated.
	// makes it harder to debug and find the edge cases.
	int fill = 0, prevfill = 0;
	for (int i = median ; i < n-1; i++) {
		prevfill = fill;
		fill += (v[i+1] - v[i]) * (i+1 - median);

		if (tot < fill) {
			int h = v[i] + (tot - prevfill) / (i+1 - median);
			cout<<h<<endl;

			return 0;
		}
	}








	return 0;
}