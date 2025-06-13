class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long ans = 0;
        if (n > k) ans += k * (long long)(n - k);
        if (m > k) ans += k * (long long)(m - k);
        return ans;
    }
};