#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	int a,b;
	vector<pair<int,int> > v(n);
	int mi = 1000000001, ma = 0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v[i] = make_pair(a, b);

		mi = min(mi, a);
		ma = max(ma, b);
	}

	pair<int, int> foo (mi, ma);
	for(int i=0;i<n;i++){
		if (v[i] == foo) {
			cout<<i+1<<endl;
			return 0;
		}
	}

	cout<<-1<<endl;

	return 0;
}
