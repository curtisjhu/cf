#include <iostream>
using namespace std;

int main(){
	int t, b, m, n;
	cin>>t;

	while(t--){
		cin>>n;

		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}


		cin>>m;
		int tot = 0;
		for(int j=0;j<m;j++){
			cin>>b;
			tot += b;
		}

		int ic = tot%n;
		cout<<arr[ic]<<endl;

	}
	return 0;
}
