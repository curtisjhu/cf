#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);

	vector<int>a(n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	map<int, int> m;
	for(int i=0;i<n-k;i++){
		int total = 0;
		for(int j=0;j<k;j++){
			total += a[i+j];
		}

		m.insert(pair<int,int>(i, total));
	}

	pair<int,int> lowest(1, 303);
	for(int i=0;i<m.size();i++){
		if (m[i]<lowest.second) {
			lowest.second = m[i];
			lowest.first = i;
		}
	}

	cout<<lowest.first+1<<endl;
	
	return 0;
}
