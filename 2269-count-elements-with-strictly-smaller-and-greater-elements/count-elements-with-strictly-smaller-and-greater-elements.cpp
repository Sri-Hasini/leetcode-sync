class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != mini && nums[i] != maxi) cnt++;
        }
        return cnt;
    }
};