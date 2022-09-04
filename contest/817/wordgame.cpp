#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	int n;

	map<string, int>mm;
	while(t--){
		cin>>n;
		vector< vector<string> >v;
		vector<string> vv;
		string s;
		for(int k=0;k<3;k++){
			for(int i=0;i<n;i++){
				cin>>s;
				vv.push_back(s);

				mm[s]++;
			}
			v.push_back(vv);
		}

		for(int i=0;i<3;i++){
			int num = 0;
			for(int j=0;j<n;j++){
				string w = v[i][j];

				int pts = 0;
				if(mm[w]==1)
					pts = 3;
				else if (mm[w]==2)
					pts = 1;
				num += pts;
				cout<<pts<<" ";
			}
			cout<<"\n";
		}
	}

	return 0;
};


