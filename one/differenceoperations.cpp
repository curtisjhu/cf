#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n, a; cin>>n>>a;

		int b;
		string msg = "YES";
		for(int i=1;i<n;i++){
			cin>>b;
			if(b%a!=0){
				msg = "NO";
				break;
			}
		}

		cout<<msg<<endl;
	}

	return 0;
};


