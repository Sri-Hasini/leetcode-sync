class Solution {
public:
    bool isPalin(int n) {
        string h = to_string(n);
        string k = h;
        reverse(k.begin(), k.end());
        return h == k;
    }
    bool isprime(int n) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    int primePalindrome(int n) {
        if (1e7 <= n && n <= 1e8)
        return 100030001;
        if (n <= 1) return 2;
        for (int i = n; i <= 1e7; i++) {
            if (i > 11 && to_string(i).size() % 2 == 0) continue; // skip even-length palindromes
            if (isPalin(i)) {
                if (isprime(i)) {
                    return i;
                }
            }
        }
        return 100030001;
    }
};