#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;

	int num = 0;
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(j+pow(i,2) == n && i+pow(j,2) == m){
				num++;
			}
		}
	}

	cout<<num<<endl;
	return 0;
}
