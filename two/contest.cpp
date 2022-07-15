#include <bits/stdc++.h>
using namespace std;

int points(int& p, int& t){
	return max(3*p/10, p-(p*t)/250);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d;

	cin>>a>>b>>c>>d;

	int misha = points(a, c);
	int vasya = points(b, d);

	if(misha>vasya)
		cout<<"Misha"<<endl;
	else if(vasya>misha)
		cout<<"Vasya"<<endl;
	else
		cout<<"Tie"<<endl;

	return 0;
}

