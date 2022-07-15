#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin>>n;

	int t = pow(n,2);

	vector<vector<int>>v;
	for(int i=1, j=0;i<=t;i++,j=(j+1)%n, t--){
		vector<int> v1 = {i, t};
		v.push_back(v1);
	}

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[0].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
			
	return 0;
}
