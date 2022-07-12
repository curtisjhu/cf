#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<int>a(n);
	int total=0, b;
	for(int i=0;i<n;i++){
		cin>>b;
		a[i]=b;
		total+=b;
	}

	int opt=0;
	for(int i=0;i<n;i++){
		if((total-a[i])%2==0){
			opt++;
		}
	}
	cout<<opt<<endl;

	return 0;
};


