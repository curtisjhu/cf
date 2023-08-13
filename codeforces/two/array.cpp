#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;

	vector<int>one;
	vector<int>two;
	vector<int>three;

	int a;
	while(n--){
		cin>>a;
		if(a<0) one.push_back(a);
		else if (a>0) two.push_back(a);
		else three.push_back(a);
	}

	cout<<one.size()<<" ";
	for(int v : one){
		cout<<v<<" ";
	}
	cout<<endl;

	cout<<two.size()<<" ";
	for(int v : two){
		cout<<v<<" ";
	}
	cout<<endl;

	cout<<three.size()<<" ";
	for(int v : three) {
		cout<<v<<" ";
	}
	cout<<endl;

	return 0;
}

