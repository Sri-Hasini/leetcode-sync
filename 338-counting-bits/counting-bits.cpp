class Solution {
public:
    int helper(int n) {
        int cnt = 0;
        while (n > 0) {
            if (n & 1) {
                cnt++;
            }
            n /= 2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector <int> ans;
        for (int i = 0; i <= n; i++) {
            ans.push_back(helper(i));
        }
        return ans;
    }
};