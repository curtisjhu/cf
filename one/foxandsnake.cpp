#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;

	bool right = true;
	for(int i=1;i<=n;i++){
		string def = string(m, '#');
		if(i%2==0){
			def = string(m-1, '.');
			if (right) def += '#';
			else def = '#'+def;

			right = !right;
		}

		cout<<def<<endl;
	}
	return 0;
}
