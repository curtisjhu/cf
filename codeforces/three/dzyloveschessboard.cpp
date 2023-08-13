#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	vector<vector<char>>v;
	for(int i=0;i<n;i++){
		vector<char>b(m);
		for(int j=0;j<m;j++){
			char sy,c;
			if(((i%2)+(j%2))%2==0)
				sy = 'W';
			else
				sy = 'B';

			cin>>c;

			if (c=='-')
				sy = '-';

			b[j]=sy;

		}
		v.push_back(b);
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
