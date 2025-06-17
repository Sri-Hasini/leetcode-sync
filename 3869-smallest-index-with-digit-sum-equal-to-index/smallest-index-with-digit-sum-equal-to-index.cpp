class Solution {
public:
    int fun(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            int y = fun(nums[i]);
            if (y == i) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};