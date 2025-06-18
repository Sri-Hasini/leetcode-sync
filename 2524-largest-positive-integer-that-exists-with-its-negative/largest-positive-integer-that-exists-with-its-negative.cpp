class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) s.insert(nums[i]);
        }
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < 0) break;
            if (s.find(-nums[i]) != s.end()) return nums[i];
        }
        return -1;
    }
};