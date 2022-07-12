#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;

	int a;
	for(int i=0;i<t;i++){
		cin>>a;
		int n = (int) 90/(a-180);

		if (n*a == (n-2)*180) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}

	return 0;
};


