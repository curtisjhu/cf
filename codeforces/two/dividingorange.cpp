#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	int f = n*k;
	bitset<904>b;
	cin>>n>>k;

	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		b[a] = 1;
	}

	vector<vector<int>>v;
	for(int p=0;p<k;p++){
		vector<int> g;
		int j=1, y=0;
		for(int i=1;i<=f;i++){
			if(b[i] && y==0) {
				g.push_back(i);
				y++;
			}
			else if (!b[i] && j < n) {
				g.push_back(i);
				j++;
			}

			if(j==5 && y) break;
		}
		v.push_back(g);
	}

	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
