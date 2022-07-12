#include <bits/stdc++.h>
using namespace std;

int main(){
	int r, c;
	cin>>r>>c;

	int a[r][c];
	int rcake = 0;
	for(int i=0;i<r;i++){
		int row = 0;
		for(int j=0;j<c;j++){
			char c;
			scanf("%c", &c);	

			if (c == '.') {
				a[i][j] = 0;
			}
			else {
				a[i][j] = 1;
				row++;
			}
		}

		if(row==0) rcake += r;
	}

	int ccake;
	for(int j=0;j<c;j++){
		int col = 0;
		for(int i=0;i<r;i++){	
			col+=a[i][j];
		}
		if (col == 0) ccake += c;
	}

		int res;
		if(r>c) {
			res = ccake + (rcake - ccake/c);
		}
		else {
			res = rcake + (ccake - rcake/r);
		}

		cout<<res<<endl;


	return 0;
}
