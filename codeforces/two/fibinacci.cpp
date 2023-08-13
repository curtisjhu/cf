#include <bits/stdc++.h>
using namespace std;

void fibinacci(int a, int b, int& n){
	if (!n) return;
	n--;

	int c = a + b;
	printf("%d ", c);
	fibinacci(b, c, n);
}

int main(){
	int n;
	cin>>n;

	int a=1, b=1;
	printf("%d %d ", a, b);
	fibinacci(a, b, n);

	return 0;
};


