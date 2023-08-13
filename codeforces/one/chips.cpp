#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin>>n>>m;

	int i = 0;
	while(m >= (1+i)) {
		m-=(1+i);
		i=(i+=1)%n;
	}

	cout<<m<<endl;

	return 0;
};


