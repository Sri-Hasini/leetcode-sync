class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        unordered_set <char> s = {'a', 'e', 'i', 'o', 'u'};
        for (int i = left; i <= right; i++) {
            if (s.find(words[i][0]) != s.end() && s.find(words[i][words[i].size() - 1]) != s.end()) cnt++;
        }
        return cnt;
    }
};