#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	stringstream ss;
	for(int i=0;i<=n;i++){
		string s = to_string(i);

		for(int j=i-1;j>=0;j--){
			s.append(" "+to_string(j));
			s.insert(0, to_string(j)+" ");
		}

		for(int k=0;k<n-i;k++){
			s.insert(0, "  ");
		}

		s.append("\n");
		ss<<s;
	}

	for(int i=n-1;i>=0;i--){
		string s = to_string(i);

		for(int j=i-1;j>=0;j--){
			s.append(" "+to_string(j));
			s.insert(0, to_string(j)+" ");
		}

		for(int k=0;k<n-i;k++){
			s.insert(0, "  ");
		}

		s.append("\n");
		ss<<s;
	}

	string res = ss.str();

	cout<<res;

	return 0;
}
