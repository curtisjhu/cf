#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;

	int a;
	for(int i=0;i<k-1;i++){
		cin>>a;
	}

	int b, prev;
	cin>>prev;
	bool t = true;
	for(int i=k;i<n && t;i++){
		cin>>b;
		if(b!=prev){
			t = false;	
		}
		prev = b;
	}

	cout<<(t?k-1:-1)<<endl;


	return 0;
}
