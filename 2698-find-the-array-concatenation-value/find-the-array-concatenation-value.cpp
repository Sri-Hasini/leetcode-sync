class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0LL;
        int n = nums.size();
        int i = 0, j = n - 1;
        while (i < j) {
            string h = to_string(nums[i]) + to_string(nums[j]);
            ans += stoll(h);
            i++;
            j--;
        }
        if (n & 1) {
            string h = to_string(nums[i]);
            ans += stoll(h);
        }
        return ans;
    }
};