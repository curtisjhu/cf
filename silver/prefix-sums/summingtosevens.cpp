#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);

	// use prefix sums cuz it must be a sequence

	// have a max_consecutive_counter
	// brute force every combo from index i to j. 
	// O( N^2/2 ) but with max_consecutive can outrule some.


	int n; cin>>n;

	// prefix sums should be LL
	vector<long long> prefix(n+1);
	for (int i=0, d;i<n;i++) {
		cin>>d;
		prefix[i+1] = prefix[i] + d;
	}

	// R inclusive, L not inclusive

	// weird inclusive exclusivity

	int max_c = 1;
	for (int i=0;i<n;i++) {
		for (int j=i+max_c; j<n+1;j++) {
			if ((prefix[j] - prefix[i]) % 7 == 0) {
				max_c = j-i;
			}
		}
	}

	cout<<max_c<<endl;




	return 0;
}