class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map <int,vector <int>> m;
        vector <long long> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        for (auto i : m) {
            vector <int> y = i.second;
            vector <long long> pre(y.size());
            pre[0] = y[0];
            for (long long j = 1; j < pre.size(); j++) {
                pre[j] = pre[j - 1] + y[j];
            }
            for (long long j = 0; j < y.size(); j++) {
                long long left = pre[j] - y[j];
                long long right = pre[y.size() - 1] - pre[j];
                long long l = j * y[j] - left;
                long long r = right - (y.size() - j - 1) * y[j];
                ans[y[j]] = l + r;
            }
        }
        return ans;
    }
};