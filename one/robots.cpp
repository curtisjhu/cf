#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(){
	int t, n, m;

	cin>>t;
	pair<int, int> lu;

	char a;
	while(t--){
		cin>>n>>m;
		bool found = false;
		for (int i=0;i<n && !found;i++){
			for(int j=0;j<m;j++){
				cin>>a;
				if (a == 'R') {
					lu = make_pair(i, j);
					found = true;
				}
			}
		}

		string ms = "YES";
		for(int i=lu.first+1;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a;
				if (a == 'R' && j<lu.second) {
					ms = "NO";
				}
			}

		}

		cout<<ms<<endl;
	}
	return 0;
}
