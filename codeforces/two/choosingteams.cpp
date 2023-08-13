#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin>>n>>k;

	vector<int>v;
	for(int i=0, a;i<n;i++){
		cin>>a;
		if(a<=5-k) v.push_back(a);
	}

	int f = v.size()/3;
	cout<<f<<endl;

	return 0;
}
