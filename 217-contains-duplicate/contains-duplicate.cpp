class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map <int,int> freq;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto j:freq){
            if(j.second>1) return true;
        }
        return false;
    }
};