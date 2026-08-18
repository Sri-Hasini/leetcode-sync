class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0,[](int a,int x) {return a|x;});
    }
};