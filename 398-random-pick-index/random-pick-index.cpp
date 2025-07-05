class Solution {
public:
vector<int>nums;
    Solution(vector<int>& nums) {
       this->nums.swap(nums);
    }
    
    int pick(int target) {
        int t;
        vector<int>indices;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
              indices.push_back(i);
            }
        }
        int l=indices.size();
        int rd=indices[rand()%l];
        return rd;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */