#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	string tem = "hello";
	int temi = 0;
	for(int i=0;i<s.size();i++){
		if (s[i] == tem[temi]){
			temi++;
		}
	}

	if(temi > 4) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}
