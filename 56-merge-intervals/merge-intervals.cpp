class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [] (auto &a, auto &b) {
            return a[0] < b[0];
        });
        vector <vector <int>> ans;
        for (int i = 0; i < intervals.size(); i++) {
            vector <int> y;
            y.push_back(intervals[i][0]);
            int curmax = intervals[i][1];
            for (int j = i + 1; j < intervals.size(); j++) {
                if (curmax >= intervals[j][0] && curmax <= intervals[j][1] || curmax > intervals[j][1]) {
                    curmax = max(curmax, intervals[j][1]);
                }
                else {
                    y.push_back(curmax);
                    ans.push_back(y);
                    i = j - 1;
                    break;
                }
                cout << ans.size();
            }
            if (y.size() != 2) {
                y.push_back(curmax);
                ans.push_back(y);
                break;
            }
        }
        return ans;
    }
};