class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector <vector<int>> ans;
        vector <int> q;
        sort(nums.begin(), nums.end());
        unordered_set<int> w(nums.begin(), nums.end());
        int x = INT_MIN, y = INT_MIN;
        for (int i = lower; i <= upper; i++) {
            if (w.find(i) == w.end()) {
                if (x == INT_MIN) {
                    x = i;
                    y = i;
                }
                else y = i;
            }
            else {
                if (x != INT_MIN) {
                    q.push_back(x);
                    q.push_back(y);
                    ans.push_back(q);
                    q.clear();
                    x = INT_MIN;
                    y = INT_MIN;
                }
            }
        }
        if (x != INT_MIN) {
            q.push_back(x);
            q.push_back(y);
            ans.push_back(q);
        }
        return ans;
    } 
};