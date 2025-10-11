class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        vector<int> pre(n);
        pre[0] = s[0] - 'a' + 1;
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + (s[i] - 'a' + 1);
        }
        int tot = pre.back();
        for (int i = 0; i < n; i++) {
            if (pre[i] == tot - pre[i]) return true;
        }
        return false;
    }
};