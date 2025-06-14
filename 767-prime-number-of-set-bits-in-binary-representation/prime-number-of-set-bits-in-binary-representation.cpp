class Solution {
public:
    int helper(int n) {
        int cnt = 0;
        while (n > 0) {
            if (n & 1) {
                cnt++;
            }
            n /= 2;
        }
        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        unordered_set <int> x = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        for (int i = left; i <= right; i++) {
            if (x.find(helper(i)) != x.end()) cnt++;
        }
        return cnt;
    }
};