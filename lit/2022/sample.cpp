#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;

	int q, tot = 0;
	for (int i= 0; i < N;i++) {
		cin>>q;
		tot+=q;
	}

	cout<<tot<<endl;

	return 0;
}