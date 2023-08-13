#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	// watch out for overflow.
	// simulation

	// keep track of num of zeros we need
	// keep rounding the front numbers.

	while (t--) {
		string num;
		cin>>num;

		int zeros = 0;
		int carry = 0;
		string res = "";
		for (int i=num.size()-1, j=1;i>=0 || carry > 0;i--, j++) {
			int curr = i < 0 ? 0 : num[i] - '0';
			int rem = carry + curr;
			carry = rem / 10;
			rem %= 10;

			if (rem >= 5) {
				carry++;
				zeros = j;
				res = "";
			} else {
				res = to_string(rem) + res;
			}
		}

		cout<<res;
		while(zeros--)
			cout<<"0";
		cout<<endl;
	}
	
	return 0;
}