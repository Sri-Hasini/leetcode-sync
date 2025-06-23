class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        // as brute force fails and gives TLE, we should do other process in O(N)
        // we will just check 4 sign combo's (1, 1) (1, -1) (-1, 1) (-1, -1)
        // then iterate on array and store maxi and mini
        // after iteration, store the maximum of the diff between maxi - mini
        int n = arr1.size(), ans = INT_MIN;
        for (auto a : {1, -1}) {
            for (auto b : {1, -1}) {
                int maxi = INT_MIN, mini = INT_MAX;
                for (int i = 0; i < n; i++) {
                    int val = a * arr1[i] + b * arr2[i] + i;
                    maxi = max(maxi, val);
                    mini = min(mini, val); 
                }
                ans = max(ans, maxi - mini);
            }
        }
        return ans;
    }
};