class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string p) {
        int n = queries.size();
        vector <bool> ans;
        for (auto i : queries) {
            int k = 0;
            int cnt = 0;
            for (int j = 0; j < i.size(); j++) {
                if (i[j] == p[k]) {
                    k++;
                }
                if (i[j] >= 'A' && i[j] <= 'Z') cnt++;
            }
            int cnt1 = 0;
            for (auto q : p) {
                if (q >= 'A' && q <= 'Z') cnt1++;
            }
            if (k == p.size() && cnt == cnt1) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};