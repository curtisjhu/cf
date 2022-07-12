#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	
	int a;
	int prev = 1;
	long long int time = 0;
	while(m--){
		cin>>a;

		int tmp = a;
		if (a<prev) a+=n;
		time += a - prev;
		prev = tmp;
	}

	cout<<time<<endl;

	return 0;
}
