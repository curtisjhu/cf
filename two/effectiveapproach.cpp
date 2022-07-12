#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

int main(){

	int n, a, m, b;
	cin>>n;

	map<int,int>arr;
	for(int i=1;i<=n;i++){
		cin>>a;
		arr.insert(pair<int,int>(a, i));
	}

	cin>>m;

	long long int v = 0, p = 0;
	for(int j=0;j<m;j++){
		cin>>b;

		v+=arr[b];
		p+=n-arr[b]+1;

	}

	cout<<v<<" "<<p<<endl;
	return 0;
}
