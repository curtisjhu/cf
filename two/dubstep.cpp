#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	while(s.find("WUB") != string::npos){
		s.replace(s.find("WUB"), 3, " ");
	}
	
	size_t start = s.find_first_not_of(" ");
	string sub = s.substr(start);
	size_t end = sub.find_last_not_of(" ");
	string sub2 = sub.substr(0, end+1);

	cout<<sub2<<endl;
	return 0;
}
