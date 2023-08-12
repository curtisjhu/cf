class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        vector<int> first = {1};
        res.push_back(first);
        
        for (int i=2;i<=numRows;i++) {
            vector<int> v(i);
            v[0] = v[i-1] = 1;

            for (int j=1;j<res[i-2].size();j++) {
                v[j] = res[i-2][j] + res[i-2][j-1];
            }

            res.push_back(v);
        }

        return res;
    }
};