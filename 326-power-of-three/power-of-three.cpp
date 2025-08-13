class Solution {
public:
    bool isPowerOfThree(int n) {
        long long ans = 0, g = 0;
        if (n < 0) return false;
        for (int i = 0; i <= 20; i++) {
            ans = pow(3,i);
            if (ans > n) {
                g = 1;
                break;
            }
            else if (ans == n) {
                break;
            }
        }
        if (g == 1) return false;
        return true;
    }
};