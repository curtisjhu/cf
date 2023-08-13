#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	int x,y;
	vector<pair<int,int>> p;
	while(t--){
		cin>>x>>y;
		p.push_back(make_pair(x,y));
	}

	int n = 0;
	for(int i=0;i<t;i++){
		pair<int,int> w = p[i];
		bitset<4> bs;
		for(int j=0;j<t;j++){
			if (w == p[j])
				continue;
			if (w.first == p[j].first || w.second == p[j].second){
				if(w.first>p[j].first) bs[0]=1;
				else if(w.first<p[j].first) bs[1]=1;
				else if(w.second>p[j].second) bs[2]=1;
				else if(w.second<p[j].second) bs[3]=1;
			}
		}

		if(bs.count() == 4) n++;
	}

	printf("%d\n", n);

	return 0;
}
