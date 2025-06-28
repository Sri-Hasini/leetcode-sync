class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector <pair<int,int>> a;
        for (int i = 0; i < nums.size(); i++) {
            a.push_back({nums[i], i});
        }
        sort(a.rbegin(), a.rend());
        vector <pair<int,int>> x;
        for (int i = 0; i < k; i++) x.push_back({a[i].second, a[i].first});
        sort(x.begin(), x.end());
        vector<int> ans;
        for (int i = 0; i < x.size(); i++) {
            ans.push_back(x[i].second);
        }
        return ans;
    }
};