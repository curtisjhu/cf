#include <bits/stdc++.h>

using namespace std;

set<int> reachable(vector<int> &a, vector<int> &b,map< int, set<int> > &m, int node) {
	set<int> reachables;
	if (m.count(node)) {
		return m[node];
	}

	for (int i=1;i<=a.size();i++) {
		if (node != i && a[node] - a[i] >= b[node] - b[i]) {
			// edge exists
			reachables.insert(i);
			cout<<"NODE:"<<node<<endl;
			cout<<i<<endl;
			for (auto x : reachable(a, b, m, i)) {
				// no duplicates
				reachables.insert(x);
			}
		}
	}
	m[node] = reachables;
	return reachables;
}

int main() {
	int t; cin>>t;

	while(t--) {
		// dp.
		// each node has a list of reachables
		// as we dfs, add to reachables.

		int n; cin>>n;
		vector<int>a(n), b(n);
		for (int i=0;i<n;i++)
			cin>>a[i];
		for (int i=0;i<n;i++)
			cin>>b[i];
		
		// dp
		map< int, set<int> > reachables;
		//dfs
		// possible 'isolated nodes'
		// need to do all indexes.
		for (int i=1;i<n;i++)
			reachable(a, b, reachables, i);
		

		vector<int> scc;
		for (int i=1;i<n;i++) {
			if (reachables[i].size() == n-1) {
				scc.push_back(i);
			}
		}

		cout<<scc.size()<<endl;
		for (int x : scc) {
			cout<<x<<" ";
		}
		cout<<endl;

	}
	return 0;
}