#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	int idx=v[n-1]+1;
	for(int i=0;i<n-1;i++){
		if(v[i]+1 != v[i+1]) {
			idx = v[i]+1;
			break;
		}
	}

	cout<<idx<<endl;
	return 0;
};


