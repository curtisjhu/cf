#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	string msg = "YES";
	for(char c : s2){
		if(c == ' ') continue;
		size_t p = s1.find(c);
		if(p == string::npos){
			msg = "NO";
			break;
		}
		s1.erase(p, 1);
	}

	cout<<msg<<endl;
	return 0;
}
