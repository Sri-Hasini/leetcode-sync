class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector <int> ans;
        int n = grid.size(), m = grid[0].size();
        for (int k = 0; k < m; k++) {
            int j = k, i = 0;
            while (i < n) {
                if (grid[i][j] == 1) {
                    if ((j + 1 < m) && grid[i][j] == grid[i][j + 1]) {
                        i++;
                        j++;
                    }
                    else {
                        ans.push_back(-1);
                        break;
                    }
                }
                else {
                    if ((j - 1 >= 0) && grid[i][j] == grid[i][j - 1]) {
                        i++;
                        j--;
                    }
                    else {
                        ans.push_back(-1);
                        break;
                    }
                }
            }
            if (i == n) ans.push_back(j);
        }
        return ans;
    }
};