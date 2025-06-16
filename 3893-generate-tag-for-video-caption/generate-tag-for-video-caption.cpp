class Solution {
public:
    string generateTag(string caption) {
        vector <string> v;
        string s = "";
        for (int i = 0; i < caption.size(); i++) {
            if (caption[i] == ' ') {
                if (s != "")
                v.push_back(s);
                s = "";
            }
            else s += caption[i];
        }
        v.push_back(s);
        string ans = "#";
        int size = 1;
        for (int i = 0; i < v[0].size(); i++) {
            if (size >= 100) break;
            if (v[0][i] >= 'A' && v[0][i] <= 'Z') {
                ans += v[0][i] + 32;
            }
            else ans += v[0][i];
            size++;
        }
        for (int i = 1; i < v.size(); i++) {
            if (size >= 100) break;
            string h = v[i];
            for (int j = 0; j < h.size(); j++) {
                if (j == 0) {
                    if (h[j] >='A' && h[j] <= 'Z') ans += h[j];
                    else ans += h[j] - 32;
                }
                else {
                    if (h[j] >='A' && h[j] <= 'Z') ans += h[j] + 32;
                    else ans += h[j];
                }
                size++;
            }
        }
        return ans;
    }
};