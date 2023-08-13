#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	bitset<101>b;
	string g, h, p;
	cin>>g>>h>>p;

	for(int i=0;i<g.size();i++){
		for(int j=0;j<p.size();j++){
			if(g[i] == p[j] && b[j] == 0)
				b[j]=1;
		}
	}
	for(int i=0;i<h.size();i++){
		for(int j=0;j<p.size();j++){
			if(h[i] == p[j] && b[j] == 0)
				b[j]=1;
		}
	}


	int total = 0;
	for(int i=0;i<p.size();i++){
		if(b[i]==0) break;
		total+=b[i];
	}

	bool correct = (g.size() + h.size()) == total;

	cout<<(correct ? "YES" : "NO")<<endl;

	return 0;
}
