#include <bits/stdc++.h>
using namespace std;

int main(){
	int y, k, n;
	scanf("%d %d %d", &y, &k, &n);

	int x = (int)ceil((double)(y+1)/k)*k - y;

	if (x<1 || x > n) {
		cout<<-1<<endl;
		return 0;
	}

	for(int j=x;j<n-y;j+=k){
		cout<<j<<" ";
	}
	cout<<endl;

	return 0;
}
