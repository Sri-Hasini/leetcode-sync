class Solution {
public:
    bool areNumbersAscending(string s) {
        vector <int> x;
        string h;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') h += s[i];
            else {
                if (h != "") {
                    int val = stoi(h);
                    x.push_back(val);
                    h = "";
                }
                continue;
            }
            if (i + 1 < s.size() && s[i + 1] >= '0' && s[i + 1] <= '9') h += s[i + 1];
            else {
                if (h != "") {
                    x.push_back(stoi(h));
                    h = "";
                    i++;
                }
                continue;
            }
            if (i + 2 < s.size() && s[i + 2] >= '0' && s[i + 2] <= '9') h += s[i + 2];
            else {
                x.push_back(stoi(h));
                h = "";
                i += 2;
                continue;
            }
        }
        for (int i = 1; i < x.size(); i++) {
            if (x[i] > x[i - 1]) continue;
            else return false;
        }
        return true;
    }
};