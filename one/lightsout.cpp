#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[3][3] = {1};
	int a;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a;
			if(a%2==1){
				arr[i][j] = arr[i][j]==1?0:1;
			}
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
};


