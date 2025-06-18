class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map <string, string> m;
        for (int i = 0; i < knowledge.size(); i++) {
            m[knowledge[i][0]] = knowledge[i][1];
        }
        string ans;
        string h;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                for (int j = i + 1; j < s.size(); j++) {
                    if (s[j] != ')')
                    h += s[j];
                    else {
                        i = j;
                        break;
                    }
                }
                if (m.find(h) != m.end())
                ans += m[h];
                else ans += '?';
                h = "";
            }
            else ans += s[i];
        }
        return ans;
    }
};