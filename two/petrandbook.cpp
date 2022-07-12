#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	int s[7];
	for(int i=0;i<7;i++){
		cin>>s[i];
	}

	int idx = 0;
	n -= s[idx];
	while(n > 0){
		idx = (idx+1)%7;
		n -= s[idx];
	}

	cout<<idx+1<<endl;
	return 0;
}
