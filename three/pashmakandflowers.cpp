#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

	int n; cin>>n;

	int a, min = 1000000001, max=0, maxc=0, minc=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a<=min) {
			if(a==min)minc++;
			else {
				minc=1;
				min =a;
			}
		}
		if(a>=max){
			if(a==max)maxc++;
			else {
				max = a;
				maxc = 1;
			}
		}
	}

	printf("%ld %lld", max-min, minc*maxc);

	return 0;
};


