class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map <string,int> m;
        for (int i = 0; i < cpdomains.size(); i++) {
            string h = cpdomains[i];
            int num;
            vector <string> s;
            string v;
            int ind = 0;
            for (int j = 0; j < h.size(); j++) {
                if (h[j] == ' ') {
                    num = stoi(v);
                    ind = j + 1;
                    break;
                }
                else v += h[j];
            }
            v = "";
            for (int j = ind; j < h.size(); j++){
                if (h[j] == '.') {
                    s.push_back(v);
                    v = "";
                }
                else v += h[j];
            }
            s.push_back(v);
            for (int i = 0; i < s.size(); i++) {
                string q = "";
                for (int j = i; j < s.size(); j++) {
                    q += s[j];
                    if (j != s.size() - 1)
                    q += '.';
                }
                m[q] += num;
            }
        }
        vector <string> ans;
        for (auto i : m) {
            string w = to_string(i.second);
            w += ' ';
            w += i.first;
            ans.push_back(w);
        }
        return ans;
    }
};