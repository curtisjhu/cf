#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

	int n; cin>>n;
	
	vector<int> v(n);
	for (int i=0;i<n;i++) cin>>v[i];

	int mindist = INT_MAX;
	for (int i=0;i<n;i++) {
		int dist = 0;

		for (int j=0;j<n;j++) {
			if (i != j) {
				dist += v[j] * (j > i ? j - i : n - i + j);
			}
		}

		if (dist < mindist) {
			mindist = dist;
		}
	}

	cout<<mindist<<endl;

	return 0;
}