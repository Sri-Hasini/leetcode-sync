class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map <int,int> m;
        int maxi = INT_MIN, x;
        for (auto i : nums) {
            m[i]++;
            if (maxi < m[i]){
                maxi = m[i];
                x = i;
            }
        }
        vector <int> ma;
        for (auto i : m) {
            if (i.second == maxi) {
                ma.push_back(i.first);
            }
        }
        int ans = INT_MAX;
        for (auto j : ma) {
            int start = -1, end = -1;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == j && start == -1) {
                    start = i;
                    break;
                }
            }
            for (int i = nums.size() - 1; i >= 0; i--) {
                if (nums[i] == j) {
                    end = i;
                    break;
                }
            }
            ans = min(end - start + 1, ans);
        }
        return ans;
    }
};