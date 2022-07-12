#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin>>s>>t;

	string msg = "YES";
	int w = t.size()-1;
	for(int i=0;i<s.size();i++){
		if (s[i] != t[w-i]){
			msg = "NO";
			break;
		}
	}

	cout<<msg<<endl;
	return 0;
}
