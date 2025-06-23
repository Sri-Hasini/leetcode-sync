class Solution {
public:
    int minimumLevels(vector<int>& p) {
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == 0) p[i] = -1;
        }
        vector <int> pre(p.size());
        for (int i = 0; i < p.size(); i++) {
            if (i == 0) {
                pre[i] = p[i];
            }
            else {
                pre[i] = pre[i - 1] + p[i];
            }
        }
        for (int i = 0; i < pre.size() - 1; i++) {
            if (pre[i] > pre[pre.size() - 1] - pre[i]) return i + 1;
        }
        return -1;
    }
};