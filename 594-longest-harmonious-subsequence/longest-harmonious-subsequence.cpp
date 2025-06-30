class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int i=0;
        while(i<nums.size()-1){
            int temp=-1,j=i;
            while(j<nums.size()){
                if(nums[j]==nums[i] || nums[j]==nums[i]+1){
                    if(nums[j]==nums[i]+1 && temp==-1)temp=j;
                }
                else break;
                j++;
            }
            if(temp==-1) i=i+1;
            else {
                if((j-i)>max)max=j-i;
                i=temp;
            }
        }
        return max;
    }
    
};