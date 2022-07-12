#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	map<int,pair<int,int> >s;
	int prev;
	cin>>prev;
	for(int i=0;i<t-1;i++){
		int curr;
		cin>>curr;
		s.insert(make_pair(abs(prev-curr), make_pair(prev, curr)));

		prev = curr;
	}
	map<int,pair<int,int> >::iterator it = s.begin();
	cout<<it->second.first<<" "<<it->second.second<<endl;

	return 0;
}
