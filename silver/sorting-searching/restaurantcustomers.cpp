#include <bits/stdc++.h>
using namespace std;

int main() {
	//
	// sort pair
	// sort reverse

	// keep a max and a counter
	// two lists sorted
	// increment and compare times

	int n; cin>>n;

	vector<int> a(n), b(n);
	for (int i=0;i<n;i++) {
		cin>>a[i]>>b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int m = INT_MIN;
	int counter = 0;
	for (int i=0, j=0;i<n && j<n;) {
		if (i < n && a[i] < b[j]) {
			i++;
			counter++;
			m = max(counter, m);
		} else {
			// all distrinct so no worries if they are the same
			j++;
			counter--;
		}
	}

	cout<<m<<endl;
	return 0;

}