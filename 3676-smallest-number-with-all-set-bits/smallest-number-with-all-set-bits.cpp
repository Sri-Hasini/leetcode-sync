class Solution {
public:
    int smallestNumber(int n) {
        int x = log2(n) + 1;
        x = (1 << x) - 1;
        return x;
    }
};