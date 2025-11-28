class Solution {
public:
    int minimumFlips(int n) {
        int cnt = 0;
        string s;
        while (n > 0) {
            if (n & 1) {
                s += '1';
            }
            else s += '0';
            n >>= 1;
        }
        string h = s;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != h[i]) cnt++;
        }
        return cnt;
    }
};