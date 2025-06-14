class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector <vector <int>> v(intervals.begin(), intervals.end());
        v.resize(v.size() + 1);
        v[v.size() - 1] = newInterval;
        sort(v.begin(), v.end());
        vector <vector <int>> ans;
        for (int i = 0; i < v.size(); i++) {
            vector <int> y;
            y.push_back(v[i][0]);
            int curmax = v[i][1];
            for (int j = i + 1; j < v.size(); j++) {
                if (curmax >= v[j][0] && curmax <= v[j][1] || curmax > v[j][1]) {
                    curmax = max(curmax, v[j][1]);
                }
                else {
                    y.push_back(curmax);
                    ans.push_back(y);
                    i = j - 1;
                    break;
                }
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