#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;

	set<pair<int,int> >p;
	int a, b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		p.insert(make_pair(a, b));
	}
		
	cout<<1+(n-p.size())<<endl;

	return 0;
};


