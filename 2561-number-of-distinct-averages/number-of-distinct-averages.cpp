class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> s;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            s.insert((nums[i] + nums[j] * 1.0) / 2);
            i++, j--;
        }
        if (nums.size() & 1) s.insert((nums[i] + nums[i]) / 2);
        return s.size();
    }
};