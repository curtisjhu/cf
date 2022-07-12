#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}

	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j+=2){
			if(a[i][j] == a[i][j+1]){
				char c = a[i][j];
				if(a[i+1][j] == c||
					a[i-1][j] == c||
					a[i+1][j+1] == c||
					a[i-1][j+1] == c) {
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}

	cout<<"NO"<<endl;

	return 0;
}
