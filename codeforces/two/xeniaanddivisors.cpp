#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n == 5 || n == 7) return true;
	return false;
}

int main(){
	int n; cin>>n;
	int g = n/3;
	int arr[7];
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(isPrime(a)) {
			cout<<-1<<endl;
			break;
		}
		arr[a]++;
	}

	if(arr[1] != g){

	}
	else if(arr[6]-arr[3] + arr[4] != arr[2]){

	}

	return 0;
}
