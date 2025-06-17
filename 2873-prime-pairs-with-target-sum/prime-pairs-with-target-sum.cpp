class Solution {
public:
    vector <int> Sieve(int n)
    {
        vector<int> prime(n + 1, 1);
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == 1) {
                for (int i = p * p; i <= n; i += p) {
                    prime[i] = 0;
                }
            }
        }
        return prime;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector <vector <int>> x;
        vector <int> y;
        vector <int> prime = Sieve(n);
        vector <int> p;
        unordered_map <int, int> m;
        for (int i = 2; i < prime.size(); i++) {
            if (prime[i] == 1) {
                p.push_back(i);
                m[i] = 1;
            }
        }
        for (int i = 0; i < p.size(); i++) {
            // for (int j = i; j < p.size(); j++) {
                int diff = n - p[i];
                if (diff < 0 || p[i] > diff) break;
                if (m.find(diff) != m.end()) {
                    y.push_back(p[i]);
                    y.push_back(diff);
                    x.push_back(y);
                    y.clear();
                }
            // }
        }
        return x;
    }
};