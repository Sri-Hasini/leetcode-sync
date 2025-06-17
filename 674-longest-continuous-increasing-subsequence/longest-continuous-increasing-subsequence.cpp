class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt = 1, maxi = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) cnt++;
            else {
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        maxi = max(maxi, cnt);
        return maxi;
    }
};