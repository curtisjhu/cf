#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t;

	vector<bool> a(t), b(t);

	char c;
	for (int j=0;j<t;j++) {
		cin>>c;
		a[j] = c == 'G' ? true : false;
	}
	for (int j=0;j<t;j++) {
		cin>>c;
		b[j] = c == 'G' ? true : false;
	}

	int counter = -1;
	while (a.size() != 0) {
		for (int j=0;j<t;j++) {
			if (a[j] && b[j]) {
				a.erase(a.begin() + j); // erase (iterator)
				b.erase(b.begin() + j);
			}
		}

		a.flip();
		counter++;

	}




	return 0;
}