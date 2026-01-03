class Solution {
public:
    int maxSum(vector<vector<int>>& a) {
        int maxi = 0, n = a.size(), m = a[0].size();
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                int sum = a[i][j] + a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i + 1][j] + a[i + 1][j - 1] + a[i + 1][j + 1];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};