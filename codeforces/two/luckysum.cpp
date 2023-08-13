#include<bits/stdc++.h>
using namespace std;

int next(long long int n){
	long long int ans = 0, temp = n;
	int tens = 1;
	vector<int>v;
	while(n){
		int digit = n%10;
		n /= 10;
		v.push_back(n);
		tens *= 10;
	}

	for(int a : v){
		if(a<=4)
	
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int l, r;
	cin>>l>>r;

	long long int sum = 0;
	for(long long int i=l;i<=r;i++){
		sum+=next(i);
	}
	cout<<sum<<endl;

	return 0;
}
