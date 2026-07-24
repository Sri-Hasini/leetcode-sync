class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set <int> x;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                x.insert(nums[i] ^ nums[j]);
            }
        }
        vector <int> y(x.begin(), x.end());
        unordered_set <int> s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < y.size(); j++) {
                s.insert(nums[i] ^ y[j]);
            }
        }
        return s.size();
    }
};