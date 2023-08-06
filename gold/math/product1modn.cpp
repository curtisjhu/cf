#include<bits/stdc++.h>
using namespace std;

// CORRECT

// in order for gcd(N, p mod N) = 1
// aka p = 1 mod N
// p must be completely coprime.
// aka p must share no common factors other than 1.


int main() {
	int n; cin>>n;

	// initialize it as zero or funky stuff happens.
	bool ms[100005] = {0};

	long long p = 1;
	for (int i=0;i<n;i++) {
		if (__gcd(n, i) == 1) {
			ms[i] = 1;
			p=p*i % n;
		}
	}

	// all the elements we've added are co prime with N via the gcd ==1
	// if the resulting product of all these is not 1 mod N
	// we exclude the product p mod N 

	// let p = all coprimes with N
	// gcd(p, N) = 1 = ap + bN
	// then p mod N = 1 or -1 
	// if it is -1 mod N, then exclude the p
	if (p!=1) {
		ms[p] = 0;
	}

	cout<<count(ms+1, ms+n, 1)<<endl;

	for(int i=0;i<n;i++) {
		if (ms[i])
			cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}