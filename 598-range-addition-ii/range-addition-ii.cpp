class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int m1 = INT_MAX, m2 = INT_MAX;
        if (ops.size() == 0) return m * n;
        for (int i = 0; i < ops.size(); i++) {
            m1 = min(m1, ops[i][0]);
            m2 = min(m2, ops[i][1]);
        }
        return m1 * m2;
    }
};