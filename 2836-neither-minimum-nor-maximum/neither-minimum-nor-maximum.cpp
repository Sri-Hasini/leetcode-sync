class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector <int> x(s.begin(), s.end());
        if (x.size() <= 2) return -1;
        return x[1];
    }
};