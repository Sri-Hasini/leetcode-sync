class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        int x = maxi - mini;
        if (x >= -(2 * k) && x <= (2 * k)) return 0;
        else x -= 2 * k;
        return x;
    }
};