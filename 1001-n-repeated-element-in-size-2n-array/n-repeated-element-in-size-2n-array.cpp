class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        map <int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int ans;
        for (auto i : m) {
            if (i.second == n) ans = i.first;
        }
        return ans;
    }
};