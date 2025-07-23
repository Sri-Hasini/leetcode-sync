class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector <int> nums1 = nums, nums2 = nums;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end(), greater<int>());
        if (nums == nums1 || nums == nums2) return true;
        return false;
    }
};