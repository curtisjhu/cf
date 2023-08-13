#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string s; cin>>s;

	size_t p = s.find('8');
	if (p == string::npos){
		cout<<0<<endl;
		return 0;
	}

	int a = 1;
	while(p != string::npos){
		s.erase(p, 1);
		a++;
		int p = s.find('8');
	}

	int q = s.size()/11;

	cout<<min(a,q)<<endl;
	return 0;
}
