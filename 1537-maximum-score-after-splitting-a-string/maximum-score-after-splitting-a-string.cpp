class Solution {
public:
    int maxScore(string s) {
        int maxi = INT_MIN;
        for (int i = 1; i < s.size(); i++) {
            int cnt1 = 0, cnt2 = 0;
            for (int j = 0; j < i; j++) {
                if (s[j] == '0') cnt1++;
            }
            for (int k = i; k < s.size(); k++) {
                if (s[k] == '1') cnt2++;
            }
            maxi = max(maxi, cnt1 + cnt2);
        }
        return maxi;
    }
};