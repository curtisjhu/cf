#include <bits/stdc++.h>
using namespace std;

string rep(int len, string s){
	for(int i=0;i<len;i++){
		if (s[i] == 'G')
			s[i] = 'B';
	}

	return s;
}

int main(){

	int n; cin>>n;

	while(n--){
		int len; cin>>len;

		string s1, s2;
		cin>>s1>>s2;

		s1 = rep(len, s1);
		s2 = rep(len, s2);

		if(s1==s2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}
