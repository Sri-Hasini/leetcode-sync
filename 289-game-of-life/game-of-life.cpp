class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        vector <vector <int>> a = b;
        int m = b.size(), n = b[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = 0;
                if (i - 1 >= 0 && i - 1 < m) if (a[i - 1][j]) live++;
                if (i - 1 >= 0 && i - 1 < m && j - 1 >= 0 && j - 1 < n) if (a[i - 1][j - 1]) live++;
                if (i - 1 >= 0 && i - 1 < m && j + 1 >= 0 && j + 1 < n) if (a[i - 1][j + 1]) live++;
                if (j - 1 >= 0 && j - 1 < n) if (a[i][j - 1]) live++;
                if (j + 1 >= 0 && j + 1 < n) if (a[i][j + 1]) live++;
                if (i + 1 >= 0 && i + 1 < m) if (a[i + 1][j]) live++;
                if (i + 1 >= 0 && i + 1 < m && j - 1 >= 0 && j - 1 < n) if (a[i + 1][j - 1]) live++;
                if (i + 1 >= 0 && i + 1 < m && j + 1 >= 0 && j + 1 < n) if (a[i + 1][j + 1]) live++;

                if (b[i][j]) {
                    if (live < 2) b[i][j] = 0;
                    if (live > 3) b[i][j] = 0;
                }
                else {
                    if (live == 3) b[i][j] = 1;
                }
            }
            cout << endl;
        }
    }
};