#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n;

	int p = 0;
	while(n--){
		cin>>m;
		p+=m;
	}

	int s[5] = { 1, 2, 3, 4, 5 };

	int b = p%(n+1);
	int sum = 0;

	for (int i=0;i<5;i++){
		if ((s[i]+b)%(n+1) != 1 ) {
			sum++;
		}
	}

	cout<<sum<<endl;

	return 0;
}
