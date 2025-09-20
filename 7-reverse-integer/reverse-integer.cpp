class Solution {
public:
    int reverse(int x) {
        long long rev = 0, a = x;
        while (a != 0) {
            int r = a % 10;
            rev = rev * 10 + r;
            a /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return rev;
    }
};