#include <bits/stdc++.h>
using namespace std;

int main() {
	int cap[3];
	int milk[3];
	for (int i = 0; i< 3;i++) {
		cin>>cap[i]>>milk[i];
	}

	int turn = 0;
	while(turn < 100) {

		int i = turn%3;
		int n = (turn+1)%3;

		int amt = min(milk[i], cap[n] - milk[n]);

		milk[n] += amt;
		milk[i] -= amt;
		turn++;
	}

	for (int i = 0; i < 3;i++) {
		cout<<milk[i]<<endl;
	}
	return 0;
}