class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-2]<nums[i-1]&&nums[i]+nums[i-2]>nums[i-2]) 
                ans=max(ans,nums[i]+nums[i-2]+nums[i-1]);
        }
        return ans;
    }
};