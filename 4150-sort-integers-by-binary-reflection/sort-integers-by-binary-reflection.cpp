class Solution {
public:
    int fun(int n) {
        int y = 0;
        while (n > 0) {
            y = (y << 1) | (n & 1);
            n >>= 1;
        }
        return y;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int x = fun(a), y = fun(b);
            if (x == y) return a < b;
            return x < y;
        });
        return nums;
    }
};