#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;

	vector<int> v(2*n);

	for (int i = 0; i < 2*n; i++) {
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	vector<int> diff;
	for(int i=0; i< 2*n-1;i++) {
		diff.push_back(v[i+1]-v[i]);
	}

	sort(diff.begin(), diff.end());
	diff.pop_back();
	diff.pop_back();

	int s = 0;
	for(int i=0;i<diff.size();i++) {
		s += diff[i];
	}

	cout<<s<<endl;

	return 0;
}