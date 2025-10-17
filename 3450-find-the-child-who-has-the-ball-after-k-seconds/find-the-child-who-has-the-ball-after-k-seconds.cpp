class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int r = k / n;
        int rem = k % n;
        if (r & 1) return (n - rem);
        return rem;
    }
};