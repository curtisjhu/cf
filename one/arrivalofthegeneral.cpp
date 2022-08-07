#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	int a, min=101, max=0, mini, maxi;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a<=min){
			min=a;
			mini = i;
		}
		if (a>max){
			max=a;
			maxi = i;
		}
	}

	int res;
	if (mini > maxi) {
		res = n-1-mini + maxi;
	} else {
		res = maxi + n-1-mini -1;
	}

	cout<<res<<endl;

	return 0;
};


