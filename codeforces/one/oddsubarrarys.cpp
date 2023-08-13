#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	int n;
	while(t--){
		cin>>n;

		int a, b, c;
		int s = 0;
		for(int i=0;i<n-2;i+=3){
			cin>>a>>b>>c;
			if (b < a || c < b) {
				s++;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
