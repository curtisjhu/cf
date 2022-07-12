#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	char prev = s[0];
	int counter = -1;
	string ms = "NO";
	for(char c : s){
		if (prev == c) counter++;
		else counter = 0;

		if (counter >= 6){
			ms = "YES";
			break;
		} 
		prev = c;
	}

	cout<<ms<<endl;
	return 0;
}
