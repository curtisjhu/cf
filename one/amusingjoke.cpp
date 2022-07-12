#include <bits/stdc++.h>
using namespace std;

int main(){

	string a, b, c;
	cin>>a>>b>>c;
	bool state = true;

	for (char r : a){
		size_t o = c.find(r);
		if (o == string::npos) {
			state = false;
		}
		c.erase(o);
	}
	for (int u = 0; u<b.size() && state;u++) {
		size_t i = c.find(b[u]);
		if (i == string::npos){
			state=false;
			break;
		}
		c.erase(i);
	}

	if (c.size() > 0) state = false;

	cout<< (state?"YES": "NO")<<endl;

	return 0;
}
