#include <bits/stdc++.h>

using namespace std;

int main() {
	// just if a row, col or diag consist of 2 >= unique letters
	// TECHNICALLY WRONG, searching for INDIVIDUAL TEAMS.

	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);

	int res[] = {0, 0, 0};

	vector< vector<char> > vv;

	char c;
	for (int i=0;i<3;i++) {
		vector<char> v(3);
		set<char> s;
		for (int j=0;j<3;j++) {
			cin>>v[j];
			s.insert(v[j]);
		}
		vv.push_back(v);
		res[s.size()]++;
	}

	for (int i=0;i<3;i++) {
		set<char> s;
		for (int j=0;j<3;j++) {
			s.insert(vv[j][i]);
		}
		res[s.size()]++;
	}

	set<char> os;
	set<char> ts;
	for (int i=0;i<3;i++) {
		os.insert(vv[i][i]);
		ts.insert(vv[2-i][i]);
	}
	res[os.size()]++;
	res[ts.size()]++;

	cout<<res[1]<<endl;
	cout<<res[2]<<endl;

	return 0;
}