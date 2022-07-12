#include <bits/stdc++.h>
using namespace std;

int main(){
	int k; cin>>k;

	int a[12];
	for(int i=0;i<12;i++){
		cin>>a[i];
	}

	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n);
	int num = 0;
	int sum = 0;

	if (sum >= k) {
		cout<<0<<endl;
		return 0;
	}
	for(int i=11;i>-1;i--){
		sum += a[i];
		num++;
		if (sum>= k){
			break;
		}
	}

	if (sum < k) {
		cout<<-1<<endl;
		return 0;
	}

	cout<<num<<endl;


	return 0;
}
