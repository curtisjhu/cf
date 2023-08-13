#include <bits/stdc++.h>
using namespace std;

int main(){

	string v = "aoyeui";
	string s;
	cin>>s;

	stringstream res;

	for(char c : s) {
		if (isupper(c)) c = tolower(c);
		if(v.find(c) == string::npos) {
			res<<'.'<<c;
		}
	}


	string f = res.str();
	cout<<f<<endl;
	return 0;
}
