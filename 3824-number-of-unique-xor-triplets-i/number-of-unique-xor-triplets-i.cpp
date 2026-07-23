class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return n;
        }
        int ans = 1;
        while (ans <= n) {
            ans <<= 1;
        }
        return ans;
    }
};
// https://chatgpt.com/share/6a61be85-5124-83ee-93f8-40e99715b6f9 for explanation