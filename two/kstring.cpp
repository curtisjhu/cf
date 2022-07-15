#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int arr[26] = {0};

	int k; cin>>k;
	string s; cin>>s;
	int a = int('a');
	set<char>ms;

	for(int i=0;i<s.size();i++){
		arr[int(s[i])-a]++;
		ms.insert(s[i]);
	}
	for(int i=0;i<26;i++){
		if(arr[i] != 0 && arr[i] != k){
			cout<< -1<<endl;
			return 0;
		}
	}

	stringstream ss;
	for(set<char>::iterator it = ms.begin(); it!=ms.end();++it){
		ss<<*it;
	}

	string p = ss.str();

	stringstream ss2;
	while(k--){
		ss2<<p;
	}

	cout<<ss2.str()<<endl;

	return 0;
}
