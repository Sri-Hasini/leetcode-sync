class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int y = nums[nums.size() - 1];
        int z = 1;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0 && y % i == 0) {
                z = i;
            }
        }
        return z;
    }
};