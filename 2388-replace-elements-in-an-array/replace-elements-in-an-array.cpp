class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        unordered_map <int,int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < op.size(); i++) {
            int val = m[op[i][0]];
            m.erase(op[i][0]);
            m[op[i][1]] = val;
        }
        for (auto i : m) {
            nums[i.second] = i.first;
        }
        return nums;
    }
};