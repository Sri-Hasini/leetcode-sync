class Solution {
public:
    int minimumLength(string s) {
        unordered_map <char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        int ans = 0;
        for (auto i : m) {
            if (i.second & 1) ans += 1;
            else if (i.second > 1) ans += 2;
        }
        return ans;
    }
};