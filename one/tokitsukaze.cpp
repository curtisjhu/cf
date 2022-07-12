#include <iostream>

using namespace std;

int main(){
	int t; cin>>t;

	char a, b;
	while (t--) {
		int n; cin>>n;
		int m = 0;
		for(int i=0;i<n;i+=2){
			cin>>a>>b;
			if (a!=b) m++;
		}
		cout<<m<<endl;
	}
	return 0;
}
