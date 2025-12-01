class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1;
        int r = 0;
        for (int i = 1; i <= k; i++) {
            r = (r * 10 + 1) % k;
            if (r == 0) return i;
        }
        // According to the Pigeonhole Principle, if we haven't found a remainder of 0 within 'k' iterations, we've entered a cycle and no solution exists , this case should theoretically not be hit if the initial check for 2 and 5 is present. We don't need to store the massive number n. We only care about the remainder after division by k.
        return -1;
    }
};