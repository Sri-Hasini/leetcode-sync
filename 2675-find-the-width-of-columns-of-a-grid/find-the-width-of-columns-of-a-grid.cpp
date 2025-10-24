class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(), n= grid[0].size();
        vector <int> ans;
        for (int i = 0; i < n; i++) {
            int maxi = 1;
            for (int j = 0; j < m; j++) {
                int val = grid[j][i];
                int cnt = 0;
                if (val < 0) {
                    cnt++;
                    val *= -1;
                }
                while (val > 0) {
                    cnt++;
                    val /= 10;
                }
                maxi = max(maxi, cnt);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};