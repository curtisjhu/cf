#include <bits/stdc++.h>
using namespace std;

// sorting the vector everytime.
// O(M * (Nlog(N) + N) ) I think
// O(M * Nlog(N) )

//Using multiset instead (orderd but not unique)
// O(M*N)

int main() {
	int t; cin>>t;

	while(t--) {
		int n, m;
		cin>>n>>m;

		vector< multiset<int> > vv(m);
		for (int i=0;i<n;i++) {
			for (int j=0,q;j<m;j++) {
				cin>>q;
				vv[j].insert(q);
			}
		}

		// sort the cols.  find the diffs between els and add them.
		// For sorted lists
		// a_i * i - sum of all elems before gives us the combos

		long long res = 0;
		for (auto &s : vv) {
			int i =0;
			long long sum = 0;
			for (auto &x : s){
				res += i * x - sum;
				sum += x;
				i++;
			}
		}
		cout<<res<<endl;
	}

	return 0;
}