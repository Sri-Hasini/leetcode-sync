class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> c;
        int cnt = 0;
        for (auto i : s) {
            if (c.find(i) == c.end()) {
                cnt++;
                c.insert(i);
            }
            i++;
        }
        return cnt;
    }
};