class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> freq;
        for(auto i:nums)
        {
            freq[i]++;
        }
        int n=nums.size();
        int z;
        for(auto j:freq){
            if(j.second==1){
                z=j.first;
                break;
            }
        }
        return z;
    }
};