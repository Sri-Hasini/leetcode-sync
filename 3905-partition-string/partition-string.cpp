class Solution {
public:
    vector<string> partitionString(string s) {
        vector <string> arr;
        set<string> sh;
        string h;
        for (int i = 0; i < s.size(); i++) {
            h += s[i];
            if (sh.find(h) == sh.end()) {
                sh.insert(h);
                arr.push_back(h);
                h = "";
            }
            else {
                if (i + 1 < s.size()) {
                    h += s[i + 1];
                    if (sh.find(h) == sh.end()) {
                        sh.insert(h);
                        arr.push_back(h);
                        h = "";
                        i = i + 1;
                    }
                    else {
                        i = i + 1;
                    }
                }
            }
        }
        return arr;
    }
};