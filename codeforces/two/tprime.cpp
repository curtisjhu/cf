#include <bits/stdc++.h>
using namespace std;

bool isTPrime(int a){
	int t=0;
	if(a%2==0)t++;
	if(a%3==0)t++;
	if(a%5==0)t++;
	if(a%7==0)t++;

	if(a>1)
		return false;

	else if (a==1){
	else if (a == 0){


	return s.size() == 3;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n; cin>>n;
	int a;
	while(n--){
		cin>>a;
		cout<<(isTPrime(a)?"YES":"NO")<<endl;
	}
	return 0;
}
