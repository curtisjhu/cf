#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n; cin>>n;

		int m = n * (n-1) / 2;
		int b[m];
		for (int i =0;i<m;i++)
			cin>>b[i];
		sort(b, b+m);
		
		// how is this guaranteed a solution?
		for (int i=0;i<m;i+=--n)
			cout<<b[i]<<' ';
		cout<<b[m-1]<<endl;;



	}
	
	return 0;
}