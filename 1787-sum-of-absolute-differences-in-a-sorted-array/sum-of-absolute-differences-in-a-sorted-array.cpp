class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector <int> ans;
        vector <int> pre(nums.size());
        pre[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            pre[i] = pre[i - 1]+ nums[i]; // prefix sum
        }

        for (int i = 0; i < nums.size(); i++) {
            int left = pre[i] - nums[i]; // sum of elements before current number
            int right = pre[nums.size() - 1] - pre[i]; // sum of elements after current number
            int l = i * nums[i] - left; // count of left elements * current element - left sum
            int r = right - (nums.size() - i - 1) * nums[i]; //right sum - right elements count * current value
            ans.push_back(l + r);
        }
        return ans;
    }
};