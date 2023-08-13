#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin>>a>>b;

	bool st = false;

	char o='\0', t='\0';
	for(int i=0;i<a.size() && !st;i++){
		if(a[i] != b[i]){
			if(o || t) {
				if(o==b[i] && t==a[i]) st=true;
			}
			else {
				o = a[i];
				t = b[i];
			}
		}
	}
	if (a.size() != b.size()) st=false;

	cout<<(st?"YES":"NO")<<endl;
	return 0;
}
