#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,d;
	cin>>n>>d;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());

	int av = n;
	int i = v.size()-1;
	int teams = 0;
	while(av>0 && i>=0){
		int tm = (d/v[i])+(d%v[i]!=0);
		av -= tm;
		i--;

		if(av>=0)
			teams++;
	}

	cout<<teams<<endl;

	return 0;
};


