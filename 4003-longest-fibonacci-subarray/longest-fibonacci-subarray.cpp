class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt = 0, maxi = 0;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + nums[i - 2]){
                cnt++;
                if (nums.size() - 1 == i) maxi = max(maxi, cnt);
            } 
            else {
                maxi = max(maxi, cnt);
                cnt = 0;
            }
        }
        return maxi + 2;
    }
};