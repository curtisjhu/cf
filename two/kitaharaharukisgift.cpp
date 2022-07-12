#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end(), greater<int>());

	int a=0, b=0;
	for(int i=0;i<n;i++){
		if (a>b) b+=v[i];
		else a+=v[i];
	}

	cout<<(a==b?"YES":"NO")<<endl;

	return 0;
}
