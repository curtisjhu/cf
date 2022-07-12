#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	if(n < 4){
		int a[7] = { 3, 2, 1, 1, 0, 0, 0 };

		for (int i=0;i<7;i++){
			if (n == a[i]){
				printf("%d %d 0", a[i+1], a[i+2]);
				break;
			}
		}
	}
	else {
		int l = 0, l2=1, l3=1, l4=2, l5 = 3;
		while(n!=l5){
			int temp = l5;
			l5 = l4+l5;
			l = l2, l2 = l3, l3 = l4, l4 = temp;
		}

		printf("%d %d %d", l4, l2, l);
	}

	return 0;
}
