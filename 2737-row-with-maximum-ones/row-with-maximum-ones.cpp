class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mini = INT_MAX, maxi = -1;
        unordered_map <int,vector <int>> m;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    cnt++;
                }
            }
            if (maxi < cnt) {
                maxi = cnt;
                m[maxi].push_back(i);
            }
        }
        vector <int> h;
        h.insert(h.end(), m[maxi].begin(), m[maxi].end());
        sort(h.begin(), h.end());
        return {h[0], maxi};
    }
};