class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                pro = 0;
                break;
            }
            else if (nums[i] > 0) {
                pro *= 1;
            }
            else pro *= -1;
        }
        if (pro == 0) return 0;
        else if (pro > 0) return 1;
        return -1;
    }
};