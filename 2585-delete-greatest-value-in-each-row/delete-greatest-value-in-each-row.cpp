class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        while (1) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 0) cnt++;
                }
            }
            if (cnt == n * m) break;
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                int max1 = INT_MIN, ind = 0;
                for (int j = 0; j < m; j++) {
                    if (max1 < grid[i][j]) {
                        max1 = grid[i][j];
                        ind = j;
                    }
                }
                grid[i][ind] = 0;
                maxi = max(maxi, max1);
            }
            ans += (maxi != INT_MIN) ? maxi : 0;
        }
        return ans;
    }
};