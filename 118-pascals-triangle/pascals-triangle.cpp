class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> firstRow;
        firstRow.push_back(1);
        ans.push_back(firstRow);
        for (int i = 1; i < n; i++) {
            vector<int> row;
            row.push_back(1); 
            for (int j = 1; j < i; j++) {
                int val = ans[i - 1][j - 1] + ans[i - 1][j];
                row.push_back(val);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};
