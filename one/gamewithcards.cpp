#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t, n, a, m, b;
	cin>>t;

	while(t--){
		cin>>n;
		int alice = 0;
		for(int i=0;i<n;i++){
			cin>>a;
			alice = max(a, alice);
		}
		cin>>m;
		int bob = 0;
		for(int i=0;i<m;i++){
			cin>>b;
			bob = max(b, bob);
		}

		if (alice > bob) {
			cout<<"Alice\nAlice"<<endl;
		}
		else if (bob > alice) {
			cout<<"Bob\nBob"<<endl;
		}
		else {
			cout<<"Alice\nBob"<<endl;
		}
	}
	return 0;
}
