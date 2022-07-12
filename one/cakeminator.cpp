#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r,c;
	cin>>r>>c;
	char p;
	bitset<10> x;
	bitset<10> y;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>p;
			if(p=='S') {
				x[i] = 1;
				y[j] = 1;
			}
		}
	}

	int total = 0;
	if (c>r) {
		int numOfR = (r-y.count());
		total += numOfR*c;
		total += (c-x.count())*(r-numOfR);
	}
	else {
		int numOfC = (c-x.count());
		total += numOfC*r;
		total += (r-y.count())*(c-numOfC);

	}

	cout<<total<<endl;

	return 0;
};


