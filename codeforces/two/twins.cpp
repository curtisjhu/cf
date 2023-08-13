#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<int>v(n);
	int a, total=0;
	for(int i=0;i<n;i++){
		cin>>a;
		v[i] = a;
		total+=a;
	}

	sort(v.rbegin(), v.rend());

	int so = 0;
	for(int i=0;i<n;i++){
		so += v[i];
		if(so > total - so) {
			cout<<i+1<<endl;
			break;
		}
	}

	return 0;
};


