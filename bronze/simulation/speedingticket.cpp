#include <bits/stdc++.h>

using namespace std;


// testcase passes
// run in emulator

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int n, m;
	cin>>n>>m;

	int road[101];

	int s, l;

	int k = 0, dest = 0;
	for(int i=0;i<n;i++) {
		cin>>l>>s;
		dest += l;
		for (;k<=100 && k <=dest;k++) {
			road[k] = s;
		}
	}

	k =0, dest =0;
	for(int i=0;i<m;i++) {
		cin>>l>>s;
		dest = l+dest;
		for(;k<=100 && k<=dest;k++) {
			road[k] = s - road[k];
		}
	}

	cout<<max(*max_element(road, road+101), 0)<<endl;

	return 0;
}