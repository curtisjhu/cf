#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	int h = 0,tc=0, cl=0;
	while((n-tc)>=(cl+h+1)){
		h++;
		cl+=h;
		tc+=cl;
	}

	cout<<h<<endl;
}
