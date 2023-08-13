#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	int five=0, zero=0;
	int a;
	for(int i=0;i<t;i++){
		cin>>a;
		if (a == 5) five++;
		else zero++;
	}
	if (!zero){
		cout<<-1<<endl;
	}
	else {
		int flag = five/9;
		if (flag) {

			for(int i=0;i<flag*9;i++)
				cout<<"5";
			for(int i=0;i<zero;i++)
				cout<<"0";

		}
		else cout<<"0";

		cout<<endl;

	}

	return 0;
}


