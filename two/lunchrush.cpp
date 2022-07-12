#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int>v;

	int f, t;
	for(int i=0;i<n;i++){
		cin>>f>>t;

		if(k-t>=0) {
			v.push_back(f);
		}
		else {
			v.push_back(f-(t-k));
		}
	}

	sort(v.begin(), v.end());

	cout<<v.back()<<endl;

	return 0;
}
