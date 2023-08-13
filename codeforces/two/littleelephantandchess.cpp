#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char c;
	bool n =true;
	for(int i=0;i<8;i++){
		cin>>c;
		bool a = c == 'W';
		for(int j=0;j<8;j++){
			cin>>c;
			bool b = c == 'W';
			if(!(a^b)) n = false;
		}
	}

	cout<<(n?"YES":"NO")<<endl;

	return 0;
}
