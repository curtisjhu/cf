#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
	string s = to_string(n);
	for(char c:s){
		if (c!='4'||c!='7') return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;

	if (isLucky(n)){
		cout<<"YES"<<endl;
	}
	else {


	if (n%4==0||n%7==0){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	}
	
	return 0;
}
