#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin>>n;

	if (n==1){
		int a;
		cin>>a;
		cout<<1<<endl;
		return 0;
	}

	n-=2;
	int p1, p2, p3;
	cin>>p1>>p2;

	int max = 2;
	int runLen = 2;
	while(n--){
		cin>>p3;
		if(p3 == p1 + p2) runLen++;
		else runLen = 0;

		if(runLen > max) max = runLen;

		p1 = p2, p2 = p3;
	}

	cout<<max<<endl;

	return 0;
}


