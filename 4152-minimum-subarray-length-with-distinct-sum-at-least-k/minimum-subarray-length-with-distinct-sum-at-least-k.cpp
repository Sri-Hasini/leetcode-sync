class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> m;
        int l = 0;
        long long d = 0;
        int ans = INT_MAX;
        for (int r = 0; r < n; r++) {
            if (m[nums[r]] == 0) {
                d += nums[r];
            }
            m[nums[r]]++;
            while (d >= k) {
                ans = min(ans, r - l + 1);
                m[nums[l]]--;
                if (m[nums[l]] == 0) {
                    d -= nums[l];
                }
                l++;
            }
        }
            if (ans == INT_MAX) return -1;
            return ans;
    }
};