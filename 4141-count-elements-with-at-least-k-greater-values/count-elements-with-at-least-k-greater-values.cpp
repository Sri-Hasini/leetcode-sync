class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        if (k == 0) return nums.size();
        sort(nums.begin(), nums.end());
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n - k; i++) {
            if (nums[i] < nums[n - k]) cnt++;
        }
        return cnt;
    }
};