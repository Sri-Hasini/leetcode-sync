class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
        sort(nums.begin(), nums.end());
        int ans = 0, i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == k) {
                ans++;
                i++;
                j--;
            }
            else {
                if (sum < k) i++;
                else j--;
            }
        }
        return ans;
    }
};