#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;


	while(n--){
		string name = "Timur";
		int a;
		cin>>a;

		char c;
		string ms = "YES";
		for (int i=0;i<a;i++){
			cin>>c;

			size_t found = name.find(c);
			if(found == string::npos){
				ms = "NO";
			}
			else {
				name.erase(name.begin()+found);
			}
		}

		if(a != 5){
			ms = "NO";
		}

		cout<<ms<<endl;
	}


	return 0;
}
