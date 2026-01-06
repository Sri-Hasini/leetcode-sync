class Solution {
public:
    string largestEven(string s) {
        int x = -1, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '2') x = i;
        }
        if (x == -1) return "";
        return s.substr(0, x + 1);
    }
};