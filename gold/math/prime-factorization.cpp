#include <bits/stdc++.h>
using namespace std;


vector<int> prime_factorization(int n) {
	vector<int> ret;
	// highest prime factor can only be sqrt(n) # number theory
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	return ret;
}