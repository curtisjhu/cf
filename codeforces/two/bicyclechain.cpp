#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> a (n, 0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m; cin>>m;
	vector<int> b (m, 0);
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	

	int arr[10000] = {0};
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			if (b[j]%a[i]==0){
				arr[b[j]/a[i]]++;				
			}
		}
	}

	for(int i=10000;i>=0;i--){
		if (arr[i] > 0) {
			cout<<arr[i]<<endl;
			break;
		}
	}
	
	return 0;
}
