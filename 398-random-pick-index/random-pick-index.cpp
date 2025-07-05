class Solution {
public:
    vector<int> v;
    Solution(vector<int>& nums) {
        v=nums;
    }
    
    int pick(int target) {
        while(true){
            int idx = rand()%v.size();
            if(target == v[idx]) return idx;
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */