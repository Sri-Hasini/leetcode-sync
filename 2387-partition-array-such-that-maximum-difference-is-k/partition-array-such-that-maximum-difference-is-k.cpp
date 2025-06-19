class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] - nums[i] <= k) {
                    if (j == nums.size() - 1) {
                        i = nums.size() - 1;
                    }
                    continue;
                } 
                else {
                    i = j - 1;
                    break;
                }
            }
            cnt++;
        }
        return cnt;
    }
};