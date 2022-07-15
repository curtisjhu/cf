#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[4][4];
	char c;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>c;
			a[i][j] = (c=='.') ? 1 : 0;
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int b = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
			if (b!=2){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}

	cout<<"NO"<<endl;

	return 0;
};


