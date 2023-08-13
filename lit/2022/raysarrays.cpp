#include <bits/stdc++.h>
using namespace std;


// passes 1/10, timeout on rest
int main() {

	long long res = LLONG_MAX;

	int n;
	cin>>n;

	// must initialize vector to a size in order to use v[index] on elements.
	// vector< vector<int> > mat(n, vector<int>(n));

	// for (int i = 0; i < n; i ++) {
	// 	for (int j = 0; j < n; j ++) {
	// 		cin>>mat[i][j];
	// 	}
	// }


	// Just brute force considering one of the points as a "pivto" that doesn't move. 
	// Calculating the number of steps of others towards that pivot.
	// RESULT: TIMEOUT
	/**
	 * 
	vector< vector<int> > ps;
	int q;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++) {
			cin>>q;
			if (q > 0) {
				vector<int> temp = {q, i, j};
				ps.push_back(temp);
			}
		}
	}

	for (vector<int> p : ps) {
		long long ss = 0;
		for (vector<int> z : ps) {
			if (p != z) {
				ss += abs(z[1] - p[1]) + abs(z[2] - p[2]);
			}
		}

		res = min(ss, res);
	}
	*/



	// use weighted averages? Average in x axis and average in y?
	// I can't really prove that this will be the minimal # of steps though.
	// just intuition.

	// float x = 0, y = 0;
	// for (int i = 1; i <= n; i ++) {
	// 	for (int j = 1; j <= n; j ++) {
	// 		x += mat[i-1][j-1] * j;
	// 		y += mat[i-1][j-1] * i;
	// 	}
	// }

	// x /= n;
	// y /= n;

	// cout<<x<<y<<endl;

	// int cx = round(x) - 1;
	// int cy = round(y) - 1;

	// cout<<cx<<cy<<endl;

	// averaging doesn't work.

	// for (int i = 0; i < n; i ++) {
	// 	for (int j = 0; j < n; j ++) {
	// 		if (mat[i][j] > 0) {
	// 			int dist = abs(j-cx) + abs(i-cy);
	// 			res += mat[i][j] * dist;
	// 		}
	// 	}
	// }




	cout<<res<<endl;

	return 0;
}