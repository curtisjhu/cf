#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	map<string, int> m;

	string s;
	while(t--){
		cin>>s;
		m[s]++; 
	}


	if (m.begin()->second < m.end()->second){
		cout<<m.end()->first<<endl;
	}
	else {
		cout<<m.begin()->first<<endl;
	}

	return 0;
}
