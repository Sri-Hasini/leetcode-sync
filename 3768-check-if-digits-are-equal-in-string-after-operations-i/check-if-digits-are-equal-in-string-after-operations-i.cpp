class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() != 2) {
            string h = "";
            for (int i = 0; i < s.size() - 1; i++) {
                h += ((s[i] + s[i + 1]) % 10);
            }
            s = h;
            h = "";
        }
        if (s[0] == s[1]) return true;
        else return false;
    }
};