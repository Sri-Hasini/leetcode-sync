class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char, int> m;
        for (int i = 0; i < text.size(); i++) {
            m[text[i]]++;
        }
        int cnt = 0, m1 = 0;
        if (m.find('b') != m.end()) {
            m1 = m['b'];
        }
        else return cnt;
        if (m.find('a') != m.end()) {
            m1 = min(m['a'], m1);
        }
        else return cnt;
        if (m.find('l') != m.end()) {
            m1 = min(m['l'] / 2, m1);
        }
        else return cnt;
        if (m.find('o') != m.end()) {
            m1 = min(m['o'] / 2, m1);
        }
        else return cnt;
        if (m.find('n') != m.end()) {
            m1 = min(m['n'], m1);
            cnt = m1;
        }
        return cnt;
    }
};