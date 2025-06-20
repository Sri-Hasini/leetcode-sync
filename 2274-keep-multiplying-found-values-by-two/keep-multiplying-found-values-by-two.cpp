class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map <int, int> m;
        for (int i = 0; i < nums.size(); i++) m[nums[i]]++;
        while (1) {
            if (m.find(original) != m.end()) original *= 2;
            else break;
        }
        return original;
    }
};