#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin>>n>>m;

	if (m==1)
		cout<<(n-1)<<endl;
	else
		cout<<(m-1)*n<<endl;

	return 0;
};


