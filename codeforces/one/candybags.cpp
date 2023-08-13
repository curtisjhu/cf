#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	int ns=pow(n,2);

	for(int j=1;j<=n;j++){
		int i=j;
		cout<<i<<" ";
		while(i<ns){
			if((i-j)%2==0) i+=2*n-1;
			else i+=1;
			cout<<i<<" ";
		}
		cout<<endl;
	}

	return 0;
}
