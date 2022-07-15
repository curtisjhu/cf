#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int s, n;
	cin>>s>>n;

	vector<int>x(n);
	vector<int>y(n);
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}

	while(x.size()) {
		int t = 0;
		for(int i=0;i<n;i++){
			if(x[i]<s) {
				t+=y[i];
				x.erase(x.begin()+i);
				y.erase(y.begin()+i);
			}
		}
		s+=t;

		if(t==0) break;
	}

	cout<<(x.size()?"YES":"NO")<<endl;

	return 0;
};


