class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map <int,vector <int>> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for (auto i : m) {
            if (i.second.size() >= 3) {
                vector <int> x = i.second;
                for (int j = 0; j < x.size() - 2; j++) {
                    mini = min(mini, (abs(x[j] - x[j + 1]) + (abs(x[j + 1] - x[j + 2]) + abs(x[j] - x[j + 2]))));
                }
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};