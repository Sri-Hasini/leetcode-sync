class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;

        for (int i = 0; i < n; i++) { // for each row
            for (int j = 0; j < n; j++) { // for each column
                bool equal = true;
                for (int k = 0; k < n; k++) {
                    if (grid[i][k] != grid[k][j]) {
                        equal = false;
                        break;
                    }
                }
                if (equal) ans++;
            }
        }
        return ans;
    }
};
