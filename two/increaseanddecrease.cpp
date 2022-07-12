#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	while(true){
		sort(v.begin(), v.end());
		v[0]++;
		v[n-1]--;

		if (v[0] == v[n-1]){
			cout<<n<<endl;
			break;
		}
		else if (v[0] > v[n-1]){
			sort(v.begin()+1, v.end()-1);
			int max = 0;
			int count = 0;
			for(int i=1;i<n;i++){
				int prev = v[i-1];
				if (v[i] == prev) count++;
				else if (v[i] != prev)
					count = 0;

				if (count > max) max = count;
			}
			cout<<max+1<<endl;
			break;
		}
	}
	return 0;
}
