#include <bits/stdc++.h>
using namespace std;

//PASS!
int main() {
	int n, m;
	cin>>n>>m;

	map<int, vector<int> > mv;

	int d;
	for (int i= 0; i < n;i++) {
		cin>>d;
		int p = d;
		int sum = 0;
		for (int j = 0; j < 7; j++) {
			sum += d % 10;
			d /= 10;
		}
		mv[sum % 13].push_back(p);
	}

	for (int i = 12; i >= 0 && m > 0; i--) {
		int s = mv[i].size();
		if (s != 0) {
			if (s > 1)
				sort(mv[i].begin(), mv[i].end());
			while(m > 0 && s > 0) {
				cout<<mv[i][s-1]<<endl;
				m--;
				s--;
			}
		}
	}

	// notes: using .begin() is a pointer
	// notes: using .begin() and .end() is messy. Use indexes instead.
	// READ, READ, READ. 


	return 0;
}