class Solution {
public:
    string findCommonResponse(vector<vector<string>>& r) {
        vector <vector <string>> x;
        unordered_map <string, int> m;
        for (int i = 0; i < r.size(); i++) {
            set<string> s(r[i].begin(), r[i].end());
            vector <string> y(s.begin(), s.end());
            for (int j = 0; j < y.size(); j++) {
                m[y[j]]++;
            }
            x.push_back(y);
        }
        vector <string> q;
        int maxi = 0;
        for (auto i : m) {
            maxi = max(maxi, i.second);
        }
        for (auto i : m) {
            if (i.second == maxi) q.push_back(i.first);
        }
        sort(q.begin(), q.end());
        return q[0];
    }
};