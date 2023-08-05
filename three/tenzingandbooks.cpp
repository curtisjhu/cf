#include<bits/stdc++.h>


bool recursePoss(vector< vector<int>>& mat, int curr, int x) {
    if (mat.size() == 0)
        return false;
    
    for (vector<int> vv : mat) {
        if (vv[0] | curr > x) {
            return false 
        }
        else if (vv[0] | curr == x) {
            return true;
        } else {
             if (recursePoss(mat))
                 return true;
        }
    }

    return false;

}

int main() {
	int t;
	cin>>t;

	while(t--) {
        int n, x;
        cin>>n>>x;

        // we can eliminate a stack if | causes it to be greater than a certain number

        vector< vector<int>> matrix;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin>>matrix[i][j];
            }
        }

        bool res = recursePoss(matrix);

        if (res) {
            cout<<"YES"<<cendl;
        } else {
            cout<<"NO"<<endl;
        }

	}

	return 0;
}
