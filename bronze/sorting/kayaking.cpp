#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;

	vector<int> v(2*n);

	set<int> persons;

	for (int i = 0; i < 2*n; i++) {
		persons.insert(i);
		cin>>v[i];
	}

	vector< vector<int> > diff(n, vector<int>(n));
	for(int i=0; i< 2*n;i++) {
		for(int j=i+1; j< 2*n;j++) {
			diff[i][j] = abs(v[i] - v[j]);
		}
	}

	sort(diff.begin(), diff.end());

	int res = INT_MAX;

	for(int i=0;i<diff.size();i++) {
		s += diff[i];
	}

	cout<<s<<endl;

	return 0;
}