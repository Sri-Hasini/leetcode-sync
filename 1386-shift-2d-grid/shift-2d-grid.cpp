class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector <int> s;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                s.push_back(grid[i][j]);
            }
        }
        int x = k % (s.size());
        vector <int> q(s.size());
        for (int i = x; i < s.size(); i++) {
            q[i] = s[i - x];
        }
        for (int i = 0; i < x; i++) {
            q[i] = s[i + s.size() - x];
        }
        int k1 = 0;
        vector <vector <int>> ans(m, vector <int> (n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = q[k1++];
            }
        }
        return ans;
    }
};