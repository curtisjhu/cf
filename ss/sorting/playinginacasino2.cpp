#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;

	while(t--) {
		int n, m;
		cin>>n>>m;

		vector< vector<int> > vv;
		for (int i=0;i<n;i++) {
			vector<int> v(m);
			for (int j=0;j<m;j++) {
				cin>>v[j];
			}
			vv.push_back(v);
		}


	}

	return 0;
}