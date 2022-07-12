#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int a, b;
	cin>>a>>b;

	int tot = 0;
	for(int i=a;i<=b;i++){
		tot += v[i];
	}
	cout<<tot<<endl;
	return 0;
}
