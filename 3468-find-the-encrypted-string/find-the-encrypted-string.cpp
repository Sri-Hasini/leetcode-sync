class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans;
        for (int i = (k % s.size()); i < s.size(); i++) {
            ans += s[i];
        }
        for (int i = 0; i < (k % s.size()); i++) {
            ans += s[i];
        }
        return ans;
    }
};