class Solution {
public:
    bool reportSpam(vector<string>& m, vector<string>& b) {
        set<string> s;
        for (auto i : b) {
            s.insert(i);
        }
        int cnt = 0;
        for (auto i : m) {
            if (s.find(i) != s.end()) {
                cnt++;
            }
        }
        if (cnt >= 2) return true;
        return false;
    }
};