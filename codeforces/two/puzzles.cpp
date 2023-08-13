#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;

	vector<int> v (m);
	for(int i=0;i<m;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	int gmin = 1001;
	for(int i=0;i<=m-n;i++){
		int min = v[i+n-1] - v[i];
		if (min < gmin){
			gmin = min;
		}
	}

	cout<<gmin<<endl;
	return 0;
}
