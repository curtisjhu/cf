#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin>>n;

	set<int> ms;
	for (int i = 0, a; i < n; i ++) {
		cin>>a;
		ms.insert(a);
	}

	cout<<ms.size();
	return 0;
}