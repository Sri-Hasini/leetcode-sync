class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map <int,int> m;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (key == nums[i]) {
                m[nums[i + 1]]++;
            }
        }
        int maxi = 0, val = 0;
        for (auto i : m) {
            if (maxi < i.second) {
                maxi = i.second;
                val = i.first;
            }
        }
        return val;
    }
};