#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);

	int t; cin>>t;

	int alph[26] = {0};

	while(t--) {
		string a, b;
		cin>>a>>b;

		set<char> ms;
		for (auto x : a) ms.insert(x);
		for (auto x : b) ms.insert(x);

		for (char x : ms) alph[x-'a']++;
	}

	for (int i=0;i<26;i++)
		cout<<alph[i]<<endl;
	return 0;
}