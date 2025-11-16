class Solution {
public:
    int mod = 1e9+7;
    int numSub(string s) {
        int ans = 0;
        long long cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                cnt++;
                if (i == s.size() - 1) {
                    ans += (cnt * (cnt + 1) / 2) % mod;
                }
            }
            else {
                ans += (cnt * (cnt + 1) / 2) % mod;
                cnt = 0;
            }
        }
        return ans;
    }
};