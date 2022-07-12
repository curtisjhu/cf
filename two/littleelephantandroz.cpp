#include <bits/stdc++.h>
using namespace std;

int main(){

	int n; cin>>n;

	int j, t, min=2000000000;

	int k;
	for(int i=0;i<n;i++){
		cin>>k;
		if (k < min) {
			min = k;
			j = i;
			t = 1;
		}
		else if (k == min) {
			t++;
		}
	}

	if (t > 1) {
		cout<<"Still Rozdil"<<endl;
	}
	else {
		cout<<j+1<<endl;
	}
	return 0;
}
