class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> res;
        for (int i = 0; i < nums.size(); i++) {
            int ind = abs(nums[i]) - 1;//we need to store the absolute value of nums[i] and - 1 in ind
            if (nums[ind] < 0) {
                res.push_back(ind + 1);//we will push ind + 1, which is nums[i]'s absolute value... if it occurs 2 times, then definitely when we encounter that number 2nd time, we will see that its nums[ind] as negative, so we need to store it in our vector
            }
            else {
                nums[ind] = -nums[ind];//otherwise, if it encounter the very first time, we need to keep it as negative
            }
        }
        return res;
    }
};