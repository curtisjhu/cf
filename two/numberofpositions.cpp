#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	cin>>n>>a>>b;

	n-=a;
	cout<<min(n, b+1)<<endl;
	return 0;
}
