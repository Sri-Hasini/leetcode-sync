class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        reverse(q.begin(), q.end());
        unordered_set<int> s1, s2;
        int r = 0, c = 0;
        long long ans = 0;

        for (auto &i : q) {
            int t = i[0], ind = i[1], val = i[2];
            if (t == 0) {
                if (s1.find(ind) == s1.end()) {
                    ans += 1LL * val * (n - c);
                    s1.insert(ind);
                    r++;
                }
            } else {
                if (s2.find(ind) == s2.end()) {
                    ans += 1LL * val * (n - r);
                    s2.insert(ind);
                    c++;
                }
            }
        }
        return ans;
    }
};