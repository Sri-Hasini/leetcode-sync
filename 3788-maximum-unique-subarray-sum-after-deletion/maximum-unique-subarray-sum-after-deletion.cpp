class Solution {
public:
    int maxSum(vector<int>& nums) {
        set <int> num;
        vector <int> num1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) num.insert(nums[i]);
            else num1.push_back(nums[i]);
        }
        int sum = accumulate(num.begin(), num.end(), 0);
        if (sum > 0) return sum;
        if (num.size() == 1) return 0;
        sort(num1.begin(), num1.end());
        return num1[num1.size() - 1];
    }
};