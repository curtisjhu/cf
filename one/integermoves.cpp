#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// 5 12 13
	// 3 4 5
	int t; cin>>t;

	int x,y;
	while(t--){
		cin>>x>>y;
		if(x==0 && y==0) {
			cout<<0<<endl;
			continue;
		}
		float a = sqrt(x*x+y*y);
		if(floor(a) == a) {
				cout<<1<<endl;
				continue;
				
		}

		cout<<2<<endl;
	}
	return 0;
}
