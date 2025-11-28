class Solution {
public:
    long long sumAndMultiply(int n) {
        int rev = 0, sum = 0;
        while (n > 0) {
            int r = n % 10;
            if (r != 0) {
                rev = rev * 10 + r;
                sum += r;
            }
            n /= 10;
        }
        int a = rev;
        rev = 0;
        while (a > 0) {
            int r = a % 10;
            rev = rev * 10 + r;
            a /= 10;
        }
        return (long long)rev * sum;
    }
};