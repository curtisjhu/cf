#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;

	vector<int> a (m);
	for(int i=0;i<m;i++){
		cin>>a[i];
	}

	vector<int> v (a);
	vector<int> b (a);


	int tm = m+1;
	int max = 0;
	while(tm--){
		sort(v.begin(), v.end());
		max += v[m-1];
		v[m-1]--;
	}

	int xm = m+1;
	int min = 0;
	while(xm--){
		sort(b.begin(), b.end());
		min += b[0];
		b[0]--;
		if (b[0] == 0) b.erase(b.begin());
	}

	cout<<max<<" "<<min<<endl;

	return 0;
}
