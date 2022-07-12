#include <iostream>
#include <string>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		string s;
		cin>>s;

		if (s.find('r') < s.find('R') &&
			s.find('b') < s.find('B') &&
			s.find('g') < s.find('G'))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
