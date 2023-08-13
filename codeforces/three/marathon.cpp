#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		int infront = 0;
		if (b>a) infront++;
		if (c>a) infront++;
		if (d>a) infront++;

		cout<<infront<<endl;
	}

	return 0;
};


