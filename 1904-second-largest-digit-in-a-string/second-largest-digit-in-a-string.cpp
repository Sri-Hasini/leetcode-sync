class Solution {
public:
    int secondHighest(string s) {
        set<int> se;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                se.insert(s[i] - '0');
            }
        }
        vector <int> x;
        x.insert(x.end(), se.begin(), se.end());
        sort(x.begin(), x.end(), greater<int>());
        if (se.size() <= 1) return -1; 
        return x[1];
    }
};