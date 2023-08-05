#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, l;
	cin>>n>>m>>l;

	int times[100200] = {0};

	int a;
	for (int i = 0; i < n; i++) {
		cin>>a;

		for (int j = a; j < a + m; j++) {
			if (times[j] < l)
				times[j]++;
			else
		}
	}

	int last = a + m;


	return 0;
}