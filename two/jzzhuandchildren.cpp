#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
	int n,m; cin>>n>>m;

	vector<pair<int,int> >s;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		s.push_back(make_pair(i, a));
	}

	while(s.size() > 1) {
		if(s[0].second - m > 0) {
			int c = s[0].second - m;
			s.push_back(make_pair(s[0].first, c));
		}
		s.erase(s.begin());
	}

	cout<<s[0].first<<endl;

	return 0;
}
