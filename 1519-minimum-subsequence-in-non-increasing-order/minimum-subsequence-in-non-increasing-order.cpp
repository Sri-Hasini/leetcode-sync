class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int>ans;
        int sum = 0;
        for(int i =0 ;i<nums.size() ;i++){
             sum += nums[i];
        }        
        int sum2 = 0;
        for(int j = nums.size() -1 ; j>=0 ;j--){

            if(sum >= sum2){
            sum2+= nums[j];
            sum -= nums[j];
            ans.push_back(nums[j]);
            }

        }
        return ans;
    }
};