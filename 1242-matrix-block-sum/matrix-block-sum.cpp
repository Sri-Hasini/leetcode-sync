class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector <vector <int>> ans;
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; i++) {
            vector <int> a;
            for (int j = 0; j < m; j++) {
                int r1 = i - k, r2 = i + k, c1 = j - k, c2 = j + k, sum = 0;
                for (int k1 = max(0, r1); k1 <= min(r2, n - 1); k1++) {
                    for (int k2 = max(0, c1); k2 <= min(c2, m - 1); k2++) {
                        sum += mat[k1][k2];
                    }
                }
                a.push_back(sum);
            }
            ans.push_back(a);
        }
        return ans;
    }
};