class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector <long long> suf(s.size());
        suf[s.size() - 1] = shifts[s.size() - 1];
        for (int i = s.size() - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + shifts[i];
            // cout << suf[i] << " ";
        }
        for (int i = 0; i < shifts.size(); i++) {
            int val = suf[i] % 26;
            // for (int j = 0; j <= i; j++) {
            //     int x = s[j] - 'a' + val;
            //     int y = x % 26;
            //     s[j] = y + 'a';
            // }
            int x = s[i] - 'a' + val;
            int y = x % 26;
            s[i] = y + 'a';
        }
        return s;
    }
};