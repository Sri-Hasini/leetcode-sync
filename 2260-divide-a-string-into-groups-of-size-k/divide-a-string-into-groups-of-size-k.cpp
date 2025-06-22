class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int x = s.size() % 3;
        vector <string> ans;
        for (int i = 0; i < s.size(); i+=k) {
            string v;
            v += s[i];
            for (int j = 1; j < k; j++) {
                if (i+j < s.size()) v += s[i + j];
                else v += fill;
            }
            ans.push_back(v);
        }
        return ans;
    }
};