#include <bits/stdc++.h>
using namespace std;

// simulation is slow O(n^2*m)
// time limite exceeded
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

		int res = 0;
		for (int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				for (int k=0;k<m;k++) {
					res += abs(vv[i][k] - vv[j][k]);
				}
			}
		}

		cout<<res<<endl;
	}

	return 0;
}