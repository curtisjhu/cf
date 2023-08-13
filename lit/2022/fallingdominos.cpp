#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;

	// passes 4/10
	// edge cases!
	vector< pair<int, int> > vp;

	while(n--) {
		int x, h;
		cin>>x>>h;
		vp.push_back(make_pair(x, h));
	}

	sort(vp.begin(), vp.end());

	vector<int> rv;
	rv.push_back(1);
	for (int i = vp.size()-2; i >= 0; i--) {
		if (vp[i].first + vp[i].second >= vp[i+1].first) {
			rv.push_back(1+rv.back());
		} else {
			rv.push_back(1);
		}
	}

	for (int i = rv.size()-1 ; i >= 0; i--) {
		cout<<rv[i]<<" ";
	}
	cout<<endl;



	return 0;
}