#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;

	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	int tot = 0;
	for(int i=0;i<m;i++){
		if(v[i]>=0) break;
		tot += v[i];
	}

	cout<<abs(tot)<<endl;

	return 0;
}
