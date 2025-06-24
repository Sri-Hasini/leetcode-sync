class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        reverse(q.begin(), q.end()); // perform this question from reverse 
        long long ans = 0LL;
        unordered_set <int> s1, s2;// for storing already visited rows and cols
        int r = 0, c = 0;// for counting already visited rows and cols
        for (int i = 0; i < q.size(); i++){
            int t = q[i][0], ind = q[i][1], val = q[i][2];
            if (t == 0) {
                if (s1.find(ind) == s1.end()) {
                    ans += 1LL * val * (n - c);
                    r++;
                    s1.insert(ind);
                }
            }
            else {
                if (s2.find(ind) == s2.end()) {
                    ans += 1LL * val * (n - r);
                    c++;
                    s2.insert(ind);
                }
            }
        }
        return ans;
    }
};