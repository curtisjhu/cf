#include <bits/stdc++.h>
using namespace std;

bool issecond(const pair<int,int>&a, const pair<int,int>&b){
	return a.second < b.second;
}

int main(){
	int n;
	cin>>n;

	vector<pair<int,int> >v(n);
	int a, b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v[i] = make_pair(a, b);
	}

	vector<pair<int,int> >v2(v);
	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end(), issecond);

	if(v==v2)
		cout<<"Poor Alex"<<endl;
	else 
		cout<<"Happy Alex"<<endl;

	return 0;
}
