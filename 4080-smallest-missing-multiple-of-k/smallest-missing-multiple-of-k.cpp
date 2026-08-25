class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set <int> s(nums.begin(), nums.end());
        int x = 1;
        while (1) {
            if (s.find(k * x) == s.end()) return k * x;
            else x++;
        }
        return 1;
    }
};