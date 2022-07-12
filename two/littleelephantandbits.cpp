#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;

	size_t p = s.find_first_of('0');

	if (p == string::npos) {
		s.erase(0, 1);
	}
	else {
		s.erase(p, 1);
	}

	cout<<s<<endl;
	
	return 0;
}
