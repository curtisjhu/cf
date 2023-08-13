#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	string n;

	while(t--){
		cin>>n;
		
		if (n.size() <= 2 ){
			cout<<n[1]<<endl;
		} else {
			cout<<*min_element(n.begin(), n.end()) <<endl;
		}

	}
	return 0;
}
