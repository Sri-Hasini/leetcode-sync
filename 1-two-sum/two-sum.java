class Solution {
    public int[] twoSum(int[] nums, int target) {
        int g=0,h=0;
        int a[]=new int[2];
        for(int i=0;i<nums.length;i++){
            for(int j=1;j<nums.length;j++){
                int x=j;
                if(i==j){
                    j=0;
                }
                    if(nums[i]+nums[j]==target){
                        g=i;
                        h=j;
                    }
                    j=x;
            }
        }
        a[0]=g;
        a[1]=h;
        return a;
    }
}