#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t; cin>>t;

	int lo, lt, ro, rt;
	while(t--){
		cin>>lo>>ro>>lt>>rt;

		if (lo <= rt && lt <= ro) {
			cout<<max(lo, lt)<<endl;
		}
		else {
			cout<< lo + lt <<endl;
		}
	}
	return 0;
}
