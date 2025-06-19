class Solution {
public:
    int minMoves(vector<int>& nums) {
        // think in reverse way, instead of doing for n - 1 elements increment... do for 1 element subtracting... so it would be easier to apply our logic
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            ans += nums[i] - x;
        }
        return ans;
    }
};