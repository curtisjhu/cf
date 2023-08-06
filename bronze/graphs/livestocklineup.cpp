#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
	map< string, priority_queue<string> > av;

	freopen("lineup.in", "r", stdin);
	int t; cin>>t;
	string line;
	while(t--) {
		cin>>line;

		vector<string> pair;
		for (string &s : cows) {
			if(line.find(s) != string::npos) {
				pair.push_back(s);
			}
		}

		if (av.count(pair[0])) {
			av[pair[0]].push(pair[1]);
		} else {
			av[pair[0]] = priority_queue<string>();
			av[pair[0]].push(pair[1]);
		}


		if (av.count(pair[1])) {
			av[pair[1]].push(pair[0]);
		} else {
			av[pair[1]] = priority_queue<string>();
			av[pair[1]].push(pair[0]);
		}
	}

	string root = "Beatrice";

	while(av.size() != 0) {
		cout<<root<<endl;

		while(av.count(av[root].top()) == 0) {
			av[root].pop();
		}

		string go = av[root].top();
		av.erase(root);
		root = go;
	}
	




	freopen("lineup.out", "w", stdout);


	return 0;
}