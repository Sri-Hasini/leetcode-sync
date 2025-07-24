class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int maxi = 1, sum = nums[0];
        if (nums[0] < 1) maxi = 1 - nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            if (sum < 1) {
                maxi = max(maxi, 1 - sum);
            }
        }
        if (nums.size() == 1 && nums[0] < 1) return 1 - nums[0];
        return maxi;
    }
};