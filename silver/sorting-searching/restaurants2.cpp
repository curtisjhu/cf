#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;

	vector<pair<int, int>> v;
	for (int i=0;i<n;i++) {
		int start, end;
		cin>>start>>end;
		v.push_back({start, 1});
		v.push_back({end, -1});
	}

	sort(v.begin(), v.end());

	int curr = 0;
	int m = 0;
	for (const pair<int, int> &t : v) {
		curr += t.second;
		m = max(m, curr);
	}
	cout<<m<<endl;
}