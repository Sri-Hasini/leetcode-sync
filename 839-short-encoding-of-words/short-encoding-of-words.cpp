class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set <string> s(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++) {
            for (int j = 1; j < words[i].size(); j++) {
                s.erase(words[i].substr(j));
            }
        }
        int ans = 0;
        for (auto i : s) {
            ans += i.size() + 1;
        }
        return ans;
    }
};