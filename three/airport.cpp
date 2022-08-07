#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin>>n>>m;

	vector<int>v(m);
	for(int i=0;i<m;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	vector<int>min(v);

	int minNum = 0;
	for(int i=0, idx=0;i<n;i++){
		minNum += min[idx];
		min[idx]--;

		if(min[idx]==0)idx++;
	}

	int maxNum = 0;
	for(int i=0, idx=v.size()-1;i<n;i++){
		maxNum += v[idx];
		v[idx]--;
		sort(v.begin(), v.end());
	}

	printf("%d %d\n", maxNum, minNum);

	return 0;
};


