#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;

	int v = n;
	int l=0, r=0;
	int left, right;
	while(n--){

		cin>>left>>right;
		l+= left;
		r+=right;
	}

	int res=min(r,l) + (v-max(r,l));
	cout<<res<<endl;

	return 0;
};


