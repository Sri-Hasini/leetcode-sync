class Solution {
public:
    int kthFactor(int n, int k) {
        vector <int> factors;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) factors.push_back(i);
        }
        if (k > factors.size()) return -1;
        return factors[k - 1];
    }
};