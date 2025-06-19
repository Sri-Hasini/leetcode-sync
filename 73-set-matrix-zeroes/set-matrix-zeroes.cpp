class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector <pair<int,int>> v;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 0) {
                    v.push_back({i, j});
                }
            }
        }
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < v.size(); i++) {
            int x = v[i].first, y = v[i].second;
            for (int j = 0; j < m; j++) {
                mat[x][j] = 0; // changing row values with that x index
            }
            for (int j = 0; j < n; j++) {
                mat[j][y] = 0; // changing column values with that y index
            }
        }
    }
};