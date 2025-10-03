class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for (auto i : nums) {
            m[i]++;
        }
        vector <int> ans;
        for (auto i: m) {
            ans.push_back(i.first);
        }
        nums.swap(ans);
        return m.size();
    }
};