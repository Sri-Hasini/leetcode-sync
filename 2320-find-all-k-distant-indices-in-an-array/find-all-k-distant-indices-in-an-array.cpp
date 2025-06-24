class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector <int> m;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key)
            m.push_back(i);
        }
        vector <int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m.size(); j++) {
                if (abs(i - m[j]) <= k) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};