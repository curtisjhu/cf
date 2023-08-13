#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int numOfOdds = 0;
		for (int i=0, q;i<n;i++) {
			cin>>q;
			if (q % 2 == 1) numOfOdds++;
		}

		if (numOfOdds % 2 == 1) {
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}

	return 0;
}