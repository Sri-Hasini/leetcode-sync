class Solution {
public:
    int countPairs(vector<int>& d) {
        int mod = 1e9+7;
        unordered_map <int,int> m;
        int maxi = *max_element(d.begin(), d.end());
        int maxsum = 2 * maxi;
        int cnt = 0;
        for (int i : d) {
            for (int j = 1; j <= maxsum; j *= 2) {
                int v = j - i;
                if (m.find(v) != m.end()) {
                    cnt = (cnt + m[v]) % mod;
                }
            }
            m[i]++;
        }
        return cnt;
    }
};