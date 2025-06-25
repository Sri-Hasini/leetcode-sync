class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int s1 = -1, s2 = -1;
                int a = nums[i], b = nums[j];
                while (a > 0) {
                    s1 = max(s1, a % 10);
                    a /= 10;
                }
                while (b > 0) {
                    s2 = max(s2, b % 10);
                    b /= 10;
                }
                if (s1 == s2) {
                    ans = max(ans, nums[i] + nums[j]);
                }
            }
        }
        return ans;
    }
};