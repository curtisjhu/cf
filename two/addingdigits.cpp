#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int res(int a, int n){
	if(n==0){
	}

}


int main(){
	int a, b, n;
	cin>>a>>b>>n;

	if (b % 5 == 0){
		if(b%10==0)
			v = {5,0};
		else v={5};
	}
	else if (b%2==0){
		v = {2,4,6,8,0};
	}
	else v={0,1,2,3,4,5,6,7,8,9};

	return 0;
}
		// 5 - 5, 0
		// 1 any
		// 2 evens
		// 3 any
		// 4 evens
		// 6 - 2, 4, 8, 0, 6 evens
		// 7 - 4, 1, 8. 5, 2, 9, 6, 3, 0, 7 any
		// 8 - 8, 6, 4, 2, 0
		// 9 - 8, 7, 6, 5, 4, any
		// 0 - 0
