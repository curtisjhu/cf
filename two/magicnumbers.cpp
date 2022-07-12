#include <bits/stdc++.h>
using namespace std;

int main(){
	string d;
	cin>>d;

	string s = "YES";

	if (d[0] != '1') {
		s = "NO";
	}
	else {
		int l = 0;
		for( char c : d ){
			if (c != '1' && c != '4'){
				s = "NO";
				break;
			}
			else if (c == '4') {
				l++;
				if (l>2) {
					s = "NO";
					break;
				}
			}
			else if (c=='1'){
				l=0;
			}

		}

	}

	cout<<s<<endl;
	return 0;
}
