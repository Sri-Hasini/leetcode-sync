class Solution {
public:
    int maxJump(vector<int>& stones) {
        int ans = stones[1] - stones[0];
        int n = stones.size();
        for (int i = 0; i < n; i += 2) {
            if (i - 2 < 0) continue;
            ans = max(ans, stones[i] - stones[i - 2]);
        }
        for (int i = 1; i < n; i += 2) {
            if (i - 2 < 0) continue;
            ans = max(ans, stones[i] - stones[i - 2]);
        }
        return ans;
    }
};