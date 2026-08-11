class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
                continue;
            }
            else {
                break;
            }
        }
        while (1) {
            if (s.find(sum) != s.end()) {
                sum++;
                continue;
            }
            else {
                break;
            }
        }
        return sum;
    }
};