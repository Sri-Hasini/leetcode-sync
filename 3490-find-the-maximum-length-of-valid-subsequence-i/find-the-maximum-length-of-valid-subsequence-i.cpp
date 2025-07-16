class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even = 0, odd = 0, even_odd = 1, prev = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & 1) odd++;
            else even++;
            if (i && nums[i] % 2 == 0 && prev % 2 == 1) {
                even_odd++;
                prev = nums[i];
            }
            else if (i && nums[i] % 2 == 1 && prev % 2 == 0){
                even_odd++;
                prev = nums[i];
            }
        }
        return max({even, odd, even_odd});
    }
};