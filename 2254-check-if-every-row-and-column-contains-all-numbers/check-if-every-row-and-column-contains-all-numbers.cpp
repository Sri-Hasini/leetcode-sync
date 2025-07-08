class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        set<int> k;
        int n = m.size();
        for (int i = 0; i < n; i++) {
            k.insert(i + 1);
        }
        for (int i = 0; i < n; i++) {
            set<int> k1;
            for (int j = 0; j < n; j++) {
                k1.insert(m[i][j]);
            }
            set<int> y;
            for (int q = 0; q < n; q++) {
                y.insert(m[q][i]);
            }
            if (k != k1) return false;
            if (k != y) return false;
        }
        return true;
    }
};