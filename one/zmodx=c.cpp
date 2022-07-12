#include <iostream>
using namespace std;

int main(){
	int t, a, b, c;
	cin>>t;

	while(t--) {
		cin>>a>>b>>c;
		int x,y,z;
		x = a+ b+c;
		y = b+c;
		z = c;
		printf("%d %d %d\n", x, y, z);
	}

	return 0;
}
