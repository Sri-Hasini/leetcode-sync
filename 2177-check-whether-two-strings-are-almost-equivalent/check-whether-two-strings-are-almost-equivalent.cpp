class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map <char,int> m1, m2;
        for (auto i : word1) {
            m1[i]++;
        }
        for (auto i : word2) {
            m2[i]++;
        }
        int ans = 3;
        for (auto i : m1) {
            if (m2.find(i.first) == m2.end()) {
                int v = i.second;
                if (v > ans) return false;
            }
            else {
                int v = abs(m2[i.first] - i.second);
                if (ans < v) return false;
            }
        }
        for (auto i : m2) {
            if (m1.find(i.first) == m1.end()) {
                int v = i.second;
                if (v > ans) return false;
            }
            else {
                int v = abs(m1[i.first] - i.second);
                if (ans < v) return false;
            }
        }
        return true;
    }
};