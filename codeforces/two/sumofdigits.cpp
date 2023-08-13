#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n;
	cin>>n;

	int iter = 0;
	while(true){
		if(n<10) break;

		int tot = 0;
		while(n){
			tot += n % 10;
			n /= 10;
		}
		n = tot;
		iter++;
	}

	cout<<iter<<endl;

	return 0;
};


