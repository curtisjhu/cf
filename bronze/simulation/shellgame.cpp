#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);
	int t; cin>>t;

	vector<int> count(3);

	int a, b, g;
	while(t--){
		cin>>a>>b>>g;
		swap(count[a-1], count[b-1]);
		count[g]++;
	}

	freopen("shell.out", "w", stdout);

	cout<<max(count[0], max(count[1], count[2]))<<endl;
	return 0;
}