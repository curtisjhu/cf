#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int> v (t);
	for(int i=0;i<t;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	int m;
	for(int i=0;i<t;i++){
		if(v[i] != v.front()){
			m = i;
			break;
		}
	}

	int n;
	int j = 0;
	for(int i=t-1;i>=0;i--){
		if(v[i] != v.back()){
			n=j;
			break;
		}
		j++;
	}

	cout<<v.back()-v.front()<<" "<<n*m<<endl;
	return 0;
}
