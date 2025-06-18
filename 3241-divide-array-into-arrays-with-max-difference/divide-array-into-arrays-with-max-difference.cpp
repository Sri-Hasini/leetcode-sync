class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector <vector <int>> v;
        for (int i = 0; i < nums.size(); i += 3) {
            vector <int> x;
            x.push_back(nums[i]);
            x.push_back(nums[i + 1]);
            x.push_back(nums[i + 2]);
            v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++) {
            int v1 = v[i][0], v2 = v[i][1], v3 = v[i][2];
            if (abs(v1 - v2) <= k && abs(v2 - v3) <= k && abs(v3 - v1) <= k) continue;
            else return {};
        }
        return v;
    }
};