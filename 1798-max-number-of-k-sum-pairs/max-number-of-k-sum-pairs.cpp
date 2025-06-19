class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k) {
                int t = k - nums[i];
                if (m.find(t) != m.end()) {
                    if (nums[i] == t) {
                        if (m[nums[i]] >= 2) {
                            cnt++;
                            m[nums[i]] -= 2;
                        }
                    }
                    else {
                        if (m[nums[i]] >= 1 && m[t] >= 1) {
                            cnt++;
                            m[nums[i]]--;
                            m[t]--;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};