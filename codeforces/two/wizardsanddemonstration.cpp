#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, x, y;
	cin>>n>>x>>y;

	double c = double(n*y)/100 -x;
	int f = ceil(c);
	cout<<max(0, f)<<endl;

	return 0;
}
