#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	int n, k, r, c;
	while(t--){
		cin>>n>>k>>r>>c;

		vector<vector<char> > v;
		vector<int>in(n/k, 0);

		v[r-1][c-1] = 'X';
		for(int i=0;i<n;i++){
			vector<char> vv(n, '.');
			for(int g=0;g<n/k;g += k){
				vv[in[g]] = 'X';
				in[g] = (in[g]+1)%k;
			}

			v.push_back(vv);
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<v[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
};


