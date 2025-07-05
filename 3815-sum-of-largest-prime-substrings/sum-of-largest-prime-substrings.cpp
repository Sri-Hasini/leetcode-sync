class Solution {
public:
    bool fun(long long n) {
        if (n <= 1) return false;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        vector <long long> x;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                string k1 = s.substr(i, j - i + 1);
                x.push_back(stoll(k1));
            }
        }
        set<long long> y;
        for (int i = 0; i < x.size(); i++) {
            if (fun(x[i])) y.insert(x[i]);
        }
        vector <long long> u;
        u.insert(u.end(), y.begin(), y.end());
        if (u.size() <= 3) {
            long long sum = accumulate(u.begin(), u.end(), 0LL);
            return sum;
        }
        sort(u.begin(), u.end(), greater<long long>());
        long long sum = 0LL;
        for (int i = 0; i < 3; i++) {
            sum += u[i];
        }
        return sum;
    }
};